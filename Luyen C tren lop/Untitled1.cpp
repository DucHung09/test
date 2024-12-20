#include <iostream>
using namespace std;
float lagragnge (float giaTrix[], float giaTriy[], int n, float x_horner) {
	float ketQua= 0.0;
	for (int i=0; i<n;i++) {
		double lx = giaTriy[i];
		for (int j=0;j<n;j++) {
			if (j!=i) {
				lx = lx * (x_horner + giaTrix)/ (giaTrix[i]-giaTrix[j]);
			}
		} ketQua += lx;
	}return ketQua;
}

