#include <iostream>
using namespace std;

int main()
{
	float *wsk;
	float liczba = 2.2;
	cout << "wskazniki" << endl;
	wsk = &liczba;
	cout << "WSK = " << (int)wsk << endl;
	cout << "*WSK = " << *wsk << endl;
	cout << "liczba = " << liczba << endl;
	cout << "&liczba = " << (int)&liczba << endl;
	cout << "&WSK = " << (int)&wsk << endl;
	return 0;
}
