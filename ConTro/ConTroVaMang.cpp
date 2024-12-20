#include <iostream>
using namespace std;
int main () {
	int a[]={4,5,6,12,23};
	for(int i=0;i<6;i++) {
		cout << a[i]<<"\t";
	}
	cout << endl;
	int *p=a;
	for(int i =0;i<6;i++) {
		cout << *(p+i)<<"\t";
	}
	cout << endl;
	*(p+3)=123;
	for(int i=0;i<6;i++) {
		cout << a[i]<<"\t";
	}
	return 0;
} 
