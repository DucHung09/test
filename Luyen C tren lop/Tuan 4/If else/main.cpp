#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
int a, b, c;
cout<<"nhap gia tri cua a: ";
cin>>a;
cout<<"nhap gia tri cua b: ";
cin>>b;
cout<<"nhap gia tri cua c: ";
cin>>c;
if (a == 0)
{
	if (b == 0 && c == 0)
	cout<<"Phuong trinh vo so nghiem";
	else if ( b == 0 && c != 0)
	cout<<" Phuong trinh vo nghiem";
	else 
	{
		float x;
		x = -c/b;
		cout<<"phuong trinh co mot nghiem x= "<<x<<endl;
	}
}
else{
	float denta;
	denta = b*b-4*a*c;

if (denta < 0)
	cout<<"Phuong trinh vo nghiem";
else{
	float x1, x2;
	x1 = (-b + sqrt(denta))/ 2 * a;
	x2 = (-b - sqrt(denta))/ 2 * a;
	cout<<"x1= "<<x1<<endl;
	cout<<"x2= "<<x1<<endl;	
}
}
	return 0;
}
