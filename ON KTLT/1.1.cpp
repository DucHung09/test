#include <iostream>
using namespace std;
int main() {
	int a,b;
	cout << "Nhap so nguyen a: "; cin >> a;
	cout << "Nhap so nguyen b: "; cin >> b;
	cout << "Tong cua 2 so la: " << a + b << endl;
	cout << "Hieu cua 2 so la: " << a - b << endl;
	cout << "Tich cua 2 so la: " << a * b << endl;
	float Thuong = (float) a / b ;
	cout << "Thuong cua 2 so la : " << Thuong << endl;
	cout << "Chia co du: " << a % b << endl;
	return 0;
}

