#include <iostream>
using namespace std;
int main () {
	int n; 
	cout << "Nhap so phan tu: "; cin >>n;
	int M[n];
	for(int i=0;i<n;i++) {
		cout <<"M[" << i << "]=";
		cin >> M[i];
	}
	cout << "\nMang sau khi nhap:\n";
	for(int i=0;i<n;i++) {
		cout << M[i] <<"\t";
	}
	int max=M[0];
	for(int i= 1;i<n;i++) {
		if(M[i]>max)
			max=M[i];
	}
	cout << "\nPhan tu lon nhat la: " << max;
	int min=M[0];
	for(int i=1;i<n;i++) {
		if(M[i]<min)
			min=M[i];
	}
		cout << "\nPhan tu be nhat la: " << min;
	int sum;
	for(int i=0;i<n;i++) {
		sum+=M[i];
	}
	cout << "\nTong cac phan tu la: " << sum;
	return 0;
}
