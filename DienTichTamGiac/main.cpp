#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Chuong Trinh Tinh Dien Tich Tam Giac"<<endl;
	double chieucao;
	double canhday;
	double dientich;
	cout<<"Nhap chieu cao: "<<endl;
	cin>>chieucao;
	cout<<"Nhap canh day: "<<endl;
	cin>>canhday;
	dientich=1.0/2*chieucao*canhday;
	cout<<"Dien tich = "<<dientich<<endl;
	
	return 0;
}
