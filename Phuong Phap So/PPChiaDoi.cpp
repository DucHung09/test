#include <iostream>
#include <cmath>
using namespace std;
double f(double x) {
    return 2*x*x*x-x*x+2 ;
}

double PhuongPhapChiaDoi(double a, double b, double saiso) {
    double m;
    if (f(a) * f(b) >= 0) {
    cout << "Phuong trình khong thoa man dieu kien f(a) * f(b) < 0." << endl;
    }

    while ((abs(b - a) / 2.0) > saiso) {
        m = (a + b) / 2.0; 
        if (f(m) == 0.0) {
            break; 
        } else if (f(m) * f(a) < 0) {
            b = m; 
        } else {
            a = m;
        }
        cout << "a: " << a << ", b: " << b << ", m: " << m << ", f(m): " << f(m) << endl;
    }
    cout << "Sai so la: " << fabs( b - a ) / 2.0 << endl; 
    return (a + b) / 2; 
}

int main() {
    double a, b, saiso;

    cout << "Nhap khoang ly nghiem: "; cin>>a>>b; 
    cout << "Nhap sai so cho phep: ";
    cin >> saiso;
    
    double kq = PhuongPhapChiaDoi(a, b, saiso);
    cout << "Nghiem dung cua phuong trinh la: " << kq <<endl;
    

    return 0;
}

