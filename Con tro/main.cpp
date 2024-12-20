#include <iostream>
using namespace std;
int main (){
	int *p;
	p = new int;
	*p = 100;
	cout << "Dia chi tai con tro p:" << p << endl;
	cout << "Gia tri ma dia chi con tro p tro toi: " << *p << endl;
	delete p;
	
	return 0;
}

