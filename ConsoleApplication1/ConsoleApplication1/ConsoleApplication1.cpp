#include <iostream>
using namespace std;

int main()
{
	int *wsk;
	int liczba = 2;
	cout << "wskaźniki" << endl;
	wsk = &liczba;
	cout << "WSK = " << (int)wsk << endl;
	cout << "*WSK = " << *wsk << endl;
	cout << "liczba = " << liczba << endl;
	cout << "&liczba = " << (int)&liczba << endl;
	cout << "&WSK = " << (int)&wsk << endl;
	return 0;
}
