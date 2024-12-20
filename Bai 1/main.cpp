#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
int a, b, c;
cout<<"nhap gia tri cua a: ";
cin>>a;
cout<<"nhap gia tri cua b: ";
cin>>b;
cout<<"nhap gia tri cua c: ";
cin>>c;
if (a == 0)
	cout<<"Phuong trinh bac nhat";
else{
	float denta;
	denta = b*b-4*a*c;

if (denta < 0)
	cout<<"phuong trinh vo nghiem";
else
	cout<<"Phuong trinh co hai nghiem";
}
	return 0;
}
