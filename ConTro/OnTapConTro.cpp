#include <iostream>
#include <fstream>
using namespace std;
void nhapMang (int *&a, int &n) {
	do {
		cout << "Nhap n (n >=3): ";
		cin >> n;
	}
	while (n<3);
	a = new int(n);
	for(int i =0; i< n; i++) {
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void xuatMang (int*a, int &n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] <<"\t";
	}
}
void giamDan (int *a, int n) {
	for(int i = 0; i<n-1;i++){
		for (int j = i+1; j < n;j++) {
			if (a[i]<a[j]) {
				double tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
bool soChanLienTiep (int *a, int n) {
	for (int i =0; i < n - 1;i++) {
		if(a[i] % 2 == 0 && a[i+1] %2 == 0)
			return true;
	}
	return false;
}
bool mangHopLe(int *a, int n) {
	for (int i = 0; i< n; i++) {
		if(a[i] % 2 != 0)
		return false;
	}
	return true;
}
int tongSoChan (int *a,int n) {
	int tong = 0;
	for(int i = 0; i<n; i++) {
		if(a[i] % 2 == 0)
			tong += a[i];
	}
	return tong;
}
void ghifile (char filename[],int *a,int n) {
	ofstream file;
	file.open(filename, ios::out);
	for(int i = 0;i<n;i++) {
		file <<a[i] <<" ";
	}
	file << endl;
	file.close();
} 
void chenMang (int *&a, int &n, int x, int k) {
	int *b=new int [n + 1];
	for (int i = 0; i<n; i++){
		b[i] = a[i];
	}
	for (int i = n - 1; i >= k - 1; i--) {
		b[i+1] = b[i];
	}
	b[k-1] = x;
	n++;
	delete [] a;
	a = b;	
}
int main () {
	int *a, n;
	char filename[] ="MANG.TXT";
	nhapMang(a,n);
	xuatMang(a,n);
	giamDan(a,n);
	cout << "\nMang sau khi sap xep:\n";
	xuatMang(a,n);
	ghifile(filename,a,n);
	cout << "\nFile duoc luu duoi ten: " << filename << "!";
	if(soChanLienTiep(a,n)) {
		cout << "\nMang co chua hai so chan lien tiep\n";
	
}
	else {
		cout << "\nMang khong chua 2 so chan lien tiep\n";
	}	
	if(mangHopLe(a,n) ) {
		cout << "\nMang hop le\n";
	}
	else {
		cout << "\nMang khong hop le\n";
	}
	chenMang(a,n,9,1);
	cout << "\nMang sau khi chen:\n";
	xuatMang(a,n);
	delete [] a;
	return 0;
}
