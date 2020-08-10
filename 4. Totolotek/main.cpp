#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int tablica[6];
	int losowa;
	
	srand(time(NULL));
	
	cout << "Totolotek 6 z 49 liczb"<<endl;
    
	// wpisywanie liczb losowych do tablicy i porównywanie ich wzglêdem poprzednich ju¿ wybranych
	for (int dlugosc = 0; dlugosc < 6; dlugosc++)
	{
		losowa = (rand() % 49) + 1;
		int powtarzalna = 0;
		for (int szerokosc = 0; szerokosc < dlugosc; szerokosc++)
			if (tablica[szerokosc] == losowa)
				powtarzalna = 1;
		if (powtarzalna)
			dlugosc--;
		else
			tablica[dlugosc] = losowa;
	}
	
	// Wypisanie elementów tablicy
	for (int i=0; i<6; i++)
	{
		cout << tablica[i]<<" | ";
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
