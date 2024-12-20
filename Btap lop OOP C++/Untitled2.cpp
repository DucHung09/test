#include <iostream>

using namespace std;

int nhapSoNguyenDuong() {
    int n;
    do {
        cout << "Nhap so nguyen duong n (0 <= n <= 50): ";
        cin >> n;
    } while (n < 0 && n > 50);
    return n;
}
int main() {
    int n = nhapSoNguyenDuong();
    cout << "Ban da nhap: " << n << endl;
    // Ti?p t?c s? d?ng giá tr? n ? ðây
    return 0;
}
