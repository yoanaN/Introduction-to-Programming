#include<iostream>
using namespace std;

const int MAX_SIZE = 32;

void fillMatrix(int mat[][MAX_SIZE], int m){
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < m; col++)
			cin >> mat[row][col];
	}
}

void printMatrix(int mat[][MAX_SIZE], int m){
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < m; col++)
			cout  << mat[row][col] << ' ';
		cout << endl; 
	}
}

int sumMainDiagonal(int mat[][MAX_SIZE], int m) {
	int sum = 0;
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < m; col++) {
			if (row == col) 
				sum += mat[row][col];
		}
	}
	return sum;
}

int sumSecDiagonal(int mat[][MAX_SIZE], int m) {
	int sum = 0;
	int rowIdx = m - 1;
	for (int col = 0;col < m;col++) {
		sum += mat[rowIdx][col];
		rowIdx--;
	}
	
	return sum;
}
int main(){
	
	unsigned int m;
 	cout << "Enter number of rows and columns in a square matrix: ";
	cin >> m;	

	if (m >= MAX_SIZE) {
		cout << "Error: can't handle such a big matrix!" << endl;
		return -1;
	}

	int matrix[MAX_SIZE][MAX_SIZE];
	fillMatrix(matrix, m);
	printMatrix(matrix, m);
	
	cout << "Sum of main diagonal elements of a matrix: " << sumMainDiagonal(matrix, m)<<endl;
	cout << "Sum of secondary diagonal elements of a matrix: " <<sumSecDiagonal(matrix,m)<< endl;
	return 0;

}
