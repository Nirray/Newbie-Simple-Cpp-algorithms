#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>

#define size 8

using namespace std;

int binaryToDec(int dec[]);

int main(){
	
	int liczba[size];

	srand(time(NULL));

	for(int i = 0; i < size; i++)
		cout << (liczba[i] = rand() % 2); 

	cout << endl;
    cout << binaryToDec(liczba) << endl;
	system("PAUSE");
	return 0;
}

int binaryToDec(int dec[])
{
	int wynik = 0;
	for(int i = 0, potega = size-1; i < size; i++, potega--)
	{
		wynik += dec[i] * pow(2, potega);
	}

	return wynik;
}

