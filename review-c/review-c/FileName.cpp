

#include <iostream>

using namespace std;


int main() {


	int a = 10;
	long b, sizeLong;
	float c, sizeFloat;
	double d, sizeDouble;


	int sizeInt;


	sizeInt = sizeof(a);
	sizeLong = sizeof(b);
	sizeFloat = sizeof(c);
	sizeDouble = sizeof(d);


	cout << "size of int; " << sizeInt << endl;
	cout << "size of long; " << sizeLong << endl;
	cout << "size of float; " << sizeFloat << endl;
	cout << "size of double; " << sizeDouble << endl;








	return 0;
}