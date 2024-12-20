#include <iostream>
using namespace std;
int main(){
	float a,b;
	int choice;
	do {
		cout<<"Nhap gia tri a: "; cin>> a;
		cout<<"Nhap gia tri b: "; cin>> b;
		
		cout<<"Chon phep tinh: "<<endl;
		cout<<"1. Phep cong"<<endl;
		cout<<"2. Phep tru"<<endl;
		cout<<"3. Phep nhan"<<endl;
		cout<<"4. Phep chia"<<endl;
		cout<<"5. Phep chia du"<<endl;
		cout<<"6. Dung chuong trinh"<<endl;
		cout<<"Nhap lua chon: ";
		cin >> choice;
		
		switch (choice){
			case 1:
				cout<<"Phep cong: "<< a + b<<endl;
				break;
			case 2:
				cout<<"Phep tru: "<< a - b<<endl;
				break;
			case 3:
				cout<<"Phep nhan: "<< a * b<<endl;
				break;
			case 4:
				if (b == 0)
				cout<<"Loi khong the chia cho 0";
				else
				cout<<"Phep chia: "<< a / b<<endl;
				break;
			case 5:
				if (b == 0)
				cout<<"Loi khong the chia cho 0";
				else
				cout<<"Phep chia co du: "<< static_cast<int>(a) % static_cast<int>(b) <<endl;
				break;
			case 6:
				cout<<"Dung chuong trinh";
				break;
			default:
				cout<<"Khong hop le. Yeu cau nhap lai";	
		}
	}
	while (choice > 6 && choice < 1 );
return 0;
}

