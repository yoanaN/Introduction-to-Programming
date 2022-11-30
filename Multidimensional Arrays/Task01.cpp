#include<iostream>
using namespace std;

const int MAX_SIZE = 32;

void fillMatrix(int mat[][MAX_SIZE], int m, int n){
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < n; col++)
			cin >> mat[row][col];
	}
}

void printMatrix(int mat[][MAX_SIZE], int m, int n){

	for (int row = 0; row < m; row++) {
		for (int col = 0; col < n; col++)
			cout  << mat[row][col] << ' ';
		cout << endl; 
	}
}

void printReverseMatrix(int mat[][MAX_SIZE], int m, int n) {

	for (int row = m-1; row >=0; row--) {
		for (int col = n-1; col >=0; col--)
			cout << mat[row][col] << ' ';
		cout << endl;
	}
}

int main(){	
	unsigned int m, n;
 	cout << "Enter number of rows: ";
	cin >> m;
	cout << "Enter number of columns: ";
	cin >> n;

	if (m >= MAX_SIZE || n >= MAX_SIZE) {
		cout << "Error: can't handle such a big matrix!" << endl;
		return -1;
	}

	int matrix[MAX_SIZE][MAX_SIZE];
	fillMatrix(matrix, m, n);
	printMatrix(matrix, m, n);
	cout << endl;
	printReverseMatrix(matrix, m, n);
  
	return 0;
}
