#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    // Thay th? hàm này b?ng hàm b?n mu?n t?m nghi?m
    // Ví d?: f(x) = 2*x*x*x-x*x+2; // Phýõng tr?nh x^2 - 4 = 0
    return 2*x*x*x-x*x+2;
}

double chiaDoi(double a, double b, double epsilon) {
    while (abs(b - a) > epsilon) {
        double c = (a + b) / 2;
        if (f(c) == 0) {
            return c;
        } else if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a + b) / 2;
}

int main() {
    double a, b, epsilon;
    cout << "Nhap khoang [a, b]: ";
    cin >> a >> b;
    cout << "Nhap do chinh xac epsilon: ";
    cin >> epsilon;

    if (f(a) * f(b) >= 0) {
        cout << "Ham khong doi dau trong khoang da cho." << endl;
        return 1;
    }

    double nghiem = chiaDoi(a, b, epsilon);
    cout << "Nghiem gan dung: " << nghiem << endl;

    return 0;
}
