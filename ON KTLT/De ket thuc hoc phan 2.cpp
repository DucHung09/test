#include <iostream>
#include <math.h>
using namespace std;
void nhapSoNguyen (int &n) {
	cout << "Nhap so nguyen: "; cin >> n; 
}
 
void nhapSoThuc (float &x) {
	cout << "Nhap so thuc: "; cin >>x;
}
float tinhP (int a, int b) {
	float P;
	P = sqrt(pow(a - b, 2) + pow(a/b,2));
	return P;
}

float tinhQ(float x, int n) {
	float Q;
	Q = exp(fabs(x + 1));
	for(int i = 1; i <=n; i++) {
		Q += pow(x, i) / 2 * i + 1;
	}
	return Q;
}

int main () {
	int n, m;
	float x;
	nhapSoNguyen(n);
	nhapSoNguyen(m);
	nhapSoThuc(x);
	if ( n == 0)
		cout << "Nhap lai gia tri"; 
	cout << "Gia tri P(x,n): " << tinhP(x,n) << endl;
	return 0;
}

