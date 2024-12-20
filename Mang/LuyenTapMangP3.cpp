#include <iostream>
using namespace std;
int main () {
	int n;
	cout << "Nhap so phan tu: "; cin >>n;
	int M[n];
	int i =0;
	while(i<n) {
		cout << "M[" << i << "]=";
		cin >> M[i];
		if(i > 0 && M[i] < M[i-1])
			continue;
		i++;
	}
	cout << "\nMang sau khi nhap la:\n";
	for(int i=0;i<n;i++){
		cout << M[i] << "\t";
	}
	return 0;
}


