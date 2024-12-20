# include <iostream>
# include <fstream>
using namespace std;
void nhapMang (float *&a, int &n) {
	a = new float[n];
	for(int i = 0; i < n; i ++) {
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void hienThiMang (float *a, int n) {
	for(int i = 0; i < n; i ++)
		cout << a[i] << "\t";
}
void sapXepTangDan (float *a, int n) {
	for(int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if(a [i] > a[j]) {
				float tg = a[i];
				a[i] = a[j];
				a[j] = tg;	
			}
		}
	}
}
void sapXepGiamDan (float *a, int n) {
	for(int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if(a [i] < a[j]) {
				float tg = a[i];
				a[i] = a[j];
				a[j] = tg;	
			}
		}
	}
}
void ghiFile(char filename[],float *a, int n) {
	ofstream file;
	file.open(filename,ios::out);
	
	for(int i = 0;i < n; i++) {
		file << a[i] << "\t";
	}
	file << endl;
	file.close(); 
}
void ghiThemFile(char Filename[],float * a, int n) {
	ofstream file;
	file.open(Filename,ios::app);
	for(int i = 0;i < n; i++) {
		file << a[i] << "\t";
	}
	file << endl;
	file.close();
}
bool kiemTra (float *a, int n) {
	for(int i = 0; i < n ; i++) {
		if(a[i] < 10)
			return false;
	}
	return true;
}
int main () {
	char filename[] = "TEST.TXT";
	char Filename[] = "RES.TXT";
	float *a ; 
	int n;
	cout << "Nhap so phan tu:";
	cin >> n;
	nhapMang(a,n);
	hienThiMang(a,n);
	cout << "\nHam sau khi sap xep:\n";
	sapXepTangDan(a,n);
	hienThiMang(a,n);
	ghiFile(filename,a,n);
	cout << "\nFile duoc luu voi ten: " << filename << "!";
	if(kiemTra(a,n)) {
		cout << "\nKHONG\n";
	} else {
		cout <<"\nCO\n";
	}
	ghiThemFile(Filename,a,n);
	cout << "\nFile duoc luu voi ten:" << Filename << "!" << endl;
	sapXepGiamDan(a,n);
	hienThiMang(a,n);
	float sum = 0;
	int Count = 1;
	for(int i = 0; i < n; i++) {
		sum += a[i];
		if(sum > 100)
			break;
		else 
			Count++;
	}
	if(sum > 100) {
		cout << "\nCan lay it nhat\n" << Count;
} else {
	cout << "\nKhong the\n";
}
	delete [] a; 
	return 0;
}
