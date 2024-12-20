#include <iostream>
using namespace std;
int NhapSoN() {
    int n;
    if (n < 0 && n > 50 ){
    	cout << "Khong hop le" << endl;
}
    else{
    	cout << "Nhap so nguyen duong n: " << endl; cin >>n;
return n;
}
}

void NhapMang(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << "a[" << i <<"]=";
        cin >> a[i];
    }
}
void XuatMang (int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << "\t";
	}
}
int main (){
	int  n = NhapSoN();
	cout << "So nguyen duong n: " << n << endl;
	
	cout << "Nhap phan tu thu " << n << endl;
	int a[n];
	NhapMang(a,n);
	
	XuatMang(a,n);
	
	return 0;
		
}

