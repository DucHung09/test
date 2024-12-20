#include <iostream>
#include <string>
using namespace std;

class TacGia {
public:
    string tenTacGia;
    string diaChi;

    void input() {
        cout << "Nhap ten tac gia: ";
        getline(cin, tenTacGia);
        cout << "Nhap dia chi tac gia: ";
        getline(cin, diaChi);
    }

    void output() {
        cout << "Ten tac gia: " << tenTacGia << endl;
        cout << "Dia chi tac gia: " << diaChi << endl;
    }
};

class NXB {
public:
    string tenNXB;
    string diaChi;

    void input() {
        cout << "Nhap ten NXB: ";
        getline(cin, tenNXB);
        cout << "Nhap dia chi NXB: ";
        getline(cin, diaChi);
    }

    void output() {
        cout << "Ten NXB: " << tenNXB << endl;
        cout << "Dia chi NXB: " << diaChi << endl;
    }
};

class Sach {
public:
    char tenSach[30];
    TacGia tacGia;
    NXB nxb;

    void input() {
        cout << "Nhap ten sach: ";
        cin.getline(tenSach, 30);
        cout << "Nhap thong tin tac gia:" << endl;
        tacGia.input();
        cout << "Nhap thong tin NXB:" << endl;
        nxb.input();
    }

    void output() {
        cout << "Ten sach: " << tenSach << endl;
        tacGia.output();
        nxb.output();
    }
};

int main() {
    Sach sach;
    cout << "Nhap thong tin sach:" << endl;
    sach.input();
    cout << "\nThong tin sach vua nhap:" << endl;
    sach.output();
    return 0;
}

