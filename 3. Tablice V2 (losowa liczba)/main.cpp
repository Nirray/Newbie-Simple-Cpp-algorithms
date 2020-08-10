#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {
	int xod, xdo;
	cout << "Podaj przedzial liczbowy: "<<endl;
	cout << "od: ";
	cin >> xod;
	cout <<"do: ";
	cin >> xdo;
	if (xod > xdo || xdo == xod)
	{
		cout << "Wpisz poprawny przedzial liczbowy."<<endl;
		return 0;
	}
	int rozmiar = xdo-xod;
	int tablica[rozmiar];
	int indexy_liczb_najmniejszych[rozmiar];
	for (int wypelnij=0;wypelnij<rozmiar;wypelnij++)
	{
		indexy_liczb_najmniejszych[wypelnij] = -1;
	}
	int najmniejsza,najwieksza;
	int index_najmniejszej, index_najwiekszej;
	int ostatnia_min;
	int ostatnia_max;

	// zape³nianie tablicy losowymi wartoœciami z przedzia³u liczbowego
	for (int i=1;i<=rozmiar;i++)
		tablica[i] = xod + (rand() % static_cast<int>(xdo-xod+1));
	for (int licznik=1;licznik<=rozmiar;licznik++)
	{
		if (tablica[licznik] < najmniejsza)
		{
			najmniejsza = tablica[licznik];
			index_najmniejszej = licznik;
			ostatnia_min = index_najmniejszej;
		}
		if (najwieksza < tablica[licznik])
		{
			najwieksza = tablica[licznik];
			index_najwiekszej = licznik;
			ostatnia_max = index_najwiekszej;
		}
		if (najmniejsza == tablica[licznik])
		{
			cout << "------"<<endl;
			cout << "min: "<<najmniejsza<<" ["<<licznik<<"]"<<endl;
		}
		if (najwieksza == tablica[licznik])
		{
			cout << "------"<<endl;
			cout << "max: "<<najwieksza<<" ["<<licznik<<"]"<<endl;
		}
	}
	for (int licznik2=1;licznik2<=rozmiar;licznik2++)
		cout<<"["<<licznik2<<"]: "<<tablica[licznik2]<<endl;
	cout << "Ostatnia widziana minimalna: ("<< najmniejsza<<") na indeksie ["<<ostatnia_min<<"]"<<endl;
	cout << "Ostatnia widziana maksymalna: ("<< najwieksza<<") na indeksie ["<<ostatnia_max<<"]"<<endl;
	if (najmniejsza == najwieksza)
		cout << "Wpisales jednoliczbowy przedzial"<<endl;

	cout << endl;
	system("PAUSE");
	return 0;
}

