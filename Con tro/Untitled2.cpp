# include <iostream>
using namespace std;
int main (){
	int a = 100;
	int *m = &a;
	cout << "Dia chi cua m la: " << m << endl;
	cout << "Gia tri cua con Tro m la: " << *m << endl;
	cout << "Dia chi cua bien a la:" << &a << endl;
	cout << "Gia tri cua bien a la: " << a << endl;
	cout << "\n.........\n";
	int p = *m;
	cout << "Gia tri cua bien p la: " << p << endl;
	cout << "\n.........\n";
	int *x = m;
	cout << "Gia tri cua x la: " << *x << endl;
	cout << "Dia chi cua x la: " << x << endl;
	

	return 0;
}

