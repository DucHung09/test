#include <iostream>
#include <math.h>
using namespace std;
void nhapSoNguyen(int &n){
	cout << "Nhap so nguyen: ";
	cin >> n;
}

void nhapSoThuc(float &x) {
	cout << "Nhap so thuc: ";
	cin >> x;
}
float tangGiaTri (int n) {
	n++;
	return n;
}

float giamGiaTri (int n) {
	n--;
	return n;
}

float P (float x, int n) {
	float kq;
	kq = 2018 * pow(x,n);
	for (int i = 2; i <= n; i ++) {
	kq += pow(x , i)/ pow(3, i);
	}
return kq;
}

int tong (int n) {
	int kq2;
	for (int i = 6; i <= n; i++) {
	if (i % 2 ==0 )
		kq2 += i;
	}
	return kq2;
}
int main (){
	int n , m ;
	float x;
	nhapSoNguyen(n);
	nhapSoNguyen(m);
	nhapSoThuc(x);
	cout << "Tang gia tri cua n: " << tangGiaTri(n) << endl;
	cout << "Tang gia tri cua m: " << tangGiaTri(m) << endl;
	cout << "Gia tri cua P: " << P (x, n) << endl;
	cout << "Tong cua so chan: " << tong(n) << endl;
	
	return 0;
}
