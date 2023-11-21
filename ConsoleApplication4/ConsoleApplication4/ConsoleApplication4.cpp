
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int tablica[5] = { 1, 2 ,3, 4, 5 };
    cout << "tablica = " << tablica << endl;//adres zmiennej tablicowej= tablica
    cout << "&tablica = " << &tablica << endl << endl;//adres zmiennej tablicowej
    cout << "&tablica[0] = " << &tablica[0] << endl << endl;//adres zmiennej tablicowej= tablica
    cout << "&tablica[1] = " << &tablica[1] << endl << endl;//adres zmiennej tablicowej= tablica +4bajty
    cout << "&tablica[2] = " << &tablica[2] << endl << endl;//adres zmiennej tablicowej= tablica +4bajty
    cout << "&tablica[3] = " << &tablica[3] << endl << endl;//adres zmiennej tablicowej= tablica +4bajty
    cout << "&tablica[4] = " << &tablica[4] << endl << endl;//adres zmiennej tablicowej= tablica +4bajty

    //wnisek że lokowana pamięć dla kolejnych indexów w pamięci jest uporzadkowana

    cout << "(int)&tablica[0] = " << (int)&tablica[0] << endl;//adres zmiennej tablicowej= tablica
    cout << "(int)&tablica[1] = " << (int)&tablica[1] << endl;//adres zmiennej tablicowej= tablica +4bajty
    cout << "(int)&tablica[2] = " << (int)&tablica[2] << endl;//adres zmiennej tablicowej= tablica +4bajty
    cout << "(int)&tablica[3] = " << (int)&tablica[3] << endl;//adres zmiennej tablicowej= tablica +4bajty
    cout << "(int)&tablica[4] = " << (int)&tablica[4] << endl;//adres zmiennej tablicowej= tablica +4bajty

    //--------------------------------------------------------------------------------------------------------
    //------Tworzę wskaxnik, który będzie przechowywał adres tablicy (teraz będę mógł operować już na samym wskażniku...)
    int* wsk;
    wsk = &tablica[0];
    cout << endl << endl;
    cout << "przesunięcie o 2 x 4 bajty = " << (int)(wsk += 2) << endl;
    cout << "przesunięcie o 2 bajty = " << (int)(wsk += 2) << endl;
    cout << "przesunięcie o 2, wyjdziemy poza adresy el. tablicy = " << (int)(wsk += 2) << endl;
    return 0;
}
