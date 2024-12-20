#include <iostream>
using namespace std;
int main () {
	int *p[5]; // Mang con tro
	for(int i =0;i<5;i++) {
		p[i] = new int; // Cap phat bo nho
		*p[i]=i*2;
	}
	for (int i = 0; i<5; i++) {
		cout <<p[i] <<"=>" <<*p[i] << endl;
	}
	return 0;
}
