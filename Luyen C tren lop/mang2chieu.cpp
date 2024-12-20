#include <iostream>
using namespace std;
int main () {
	int row, col;
	cout << "Nhap so dong:"; cin >> row;
	cout << "Nhap so cot:"; cin >> col;
	int M[row][col] ;
	for(int i = 1; i< row; i++) {
		for(int j=1; j<col; j++) {
			cout << M[i][j] <<"\t";
		}
	}
}
