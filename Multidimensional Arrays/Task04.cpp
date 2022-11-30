#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const int MAX_SIZE = 32;

void fillMatrix(int mat[][MAX_SIZE], int m){
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < m; col++)
			cin >> mat[row][col];
	}
}

int findMaxCellSize(int mat[][MAX_SIZE], int m) {
	int max_element = mat[0][0];
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < m; col++) {
			if (max_element < mat[row][col]) {
				max_element = mat[row][col];
			}
		}
	}
	// return the number of digits that maximum number have, +1, if we have negative values
	return ((int)log10(max_element) + 1) + 1;
}

void printMatrix(int mat[][MAX_SIZE], int m){
	int cell_size = findMaxCellSize(mat, m);
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < m; col++)
			cout<<setw(cell_size)<< mat[row][col] << ' ';
		cout << endl; 
	}
}

void printBelowMD(int mat[][MAX_SIZE], int m){
	int cell_size = findMaxCellSize(mat, m);
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < row; col++)
			cout << setw(cell_size) << mat[row][col] << ' ';
	    cout << endl; 
	}
}

void printAboveMD(int mat[][MAX_SIZE], int m) {
	int cell_size = findMaxCellSize(mat, m);
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < m; col++) {
			if (col > row) {
				cout << setw(cell_size) << mat[row][col] << ' ';
			}
			else {
				cout << setw(cell_size + 1) << ' ';
			}

		}
			cout << endl;
	}
}


int main(){
	
	unsigned int m;
 	cout << "Enter number of rows and cols: ";
	cin >> m;		

	if (m >= MAX_SIZE) {
		cout << "Error: can't handle such a big matrix!" << endl;
		return -1;
	}

	int matrix[MAX_SIZE][MAX_SIZE];
	fillMatrix(matrix, m);

	cout << "The square matrix:" << endl;
	printMatrix(matrix, m);

	cout <<"Elements below the main diagonal:" << endl;
	printBelowMD(matrix, m);

	cout << "Elements above the main diagonal:" << endl;
	printAboveMD(matrix, m);
	return 0;

}
