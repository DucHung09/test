#include <iostream>

using namespace std;

class Function {
public:
double a;
double b;

Function(double a, double b): a(a), b(b) {}

double derivative() {
return a;
}
};

int main() {
double a, b;

cout << "Nhap vao he so a: ";
cin >> a;

cout << "Nhap vao he so b: ";
cin >> b;

Function f(a, b);

cout << "Gia tri dao ham cua ham so y = " << a << "x + " << b << " la: " << f.derivative() << endl;

return 0;
}
