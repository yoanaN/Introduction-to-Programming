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

int sumAllElements(int mat[][MAX_SIZE], int m, int n) {
	int sum = 0;
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < n; col++)
			sum += mat[row][col];
	}
	return sum;
}
void sumEachRow(int mat[][MAX_SIZE], int m, int n) {
	for (int row = 0; row < m; row++) {
		int sum = 0;
		for (int col = 0; col < n; col++) {
			sum += mat[row][col];
		}
		cout << "Sum of row " << row << " is: " << sum << endl;
	}
}
void sumEachCol(int mat[][MAX_SIZE], int m, int n) {
	for (int col = 0; col < n; col++) {
		int sum = 0;
		for (int row = 0; row < m; row++) {
			sum += mat[row][col];
		}
		cout << "Sum of col " << col << " is: " << sum << endl;
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
	
	cout << "Sum of all elements in the matrix: " << sumAllElements(matrix, m, n) << endl;
	sumEachRow(matrix, m, n);
  cout<<endl;
	sumEachCol(matrix, m, n);
	return 0;

}
