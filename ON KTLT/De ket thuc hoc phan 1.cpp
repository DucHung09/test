#include <iostream> 
#include <math.h>
using namespace std;
float P (float x){
	float kq1;
	kq1 = exp(fabs(x)) + pow(x, 5) + sqrt( x * x + 1);
	return kq1;
}

void hoanDoi (int n, int m) {
	int tg = n ;
	n = m ;
	m = tg ;
} 

float S (float x, int n) {
	float kq2;
	kq2 = 100;
	for (int i = 1; i <= n ; i++) {
		kq2 += sqrt(pow(x,i)) / i + i; 
	}
	return kq2;
}

int main () {
	float a;
	int b,c;
	cout << "Nhap so thuc a: "; cin >> a;
	cout << "Nhap so nguyen b : "; cin >> b;
	cout << "Nhap so nguyen c : "; cin >> c;
	if ( c < b){
		hoanDoi(c,b);
		cout << "Gia tri cua b sau khi hoan doi: " << b << endl;
		cout << "Gia tri cua c sau khi hoan doi: " << c << endl;
		cout << "Gia tri cua bieu thuc: " << S(a,c) - S(a,b) << endl;
}
return 0;
}
