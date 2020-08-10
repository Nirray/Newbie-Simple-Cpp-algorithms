#include <iostream>

using namespace std;
#define N 100
int main()
{
	int tablica[N];
	
	int przedzial_od, przedzial_do, a, b, calkowity;

    cout << "Podaj przedzial liczbowy: "<<endl;
    cout << "od: ";
    cin >> przedzial_od;
    cout <<"do: ";
    cin >> przedzial_do;
    
    // je¿eli równy
    if (przedzial_od == przedzial_do)
		a, b = przedzial_od;
    
    // je¿eli mniejszy - zamien miejscami
    if (przedzial_od > przedzial_do)
    {
		a = przedzial_do;
		b = przedzial_od;
    }
    
    else
    {
		a = przedzial_od;
		b = przedzial_do;
    }
    
    calkowity = b-a;

    cout << "Przedzial liczbowy: (" << a << ", " << b << ")"<< endl;
	for (int i=0; i <= calkowity; i++)
		tablica[i] = a++;
		
	cout << endl;
	
	for (int i=0; i <= calkowity; i++)
		cout << i+1 << ". element tablicy = " << tablica[i] << endl;
	
	int opcja;
	cout << endl << "Co chcesz zrobic z ta tablica?" << endl
	<< "1. Wyszukaj wartosc indexu" << endl
	<< "2. wyszukaj index wpisanej wartosci" << endl
	<< "3. wyszukaj wartosc maksymalna i minimalna wraz z indexem" << endl;
	cin >> opcja;
	switch (opcja)
	{
		case 1:
			int szukana;
			cout << endl << "Podaj indeks ktory chcesz znalezc: ";
			cin >> szukana;
			if (szukana < 1 || szukana > calkowity+1)
			{
				cout << "Taki index nie istnieje w tym przypadku." << endl;
				break;
			}
			else
			{
				cout << "Wartosc tego indexu wynosi: " << tablica[szukana-=1] << endl;
				break;
			}
		 	cout << "Nieznaleziono wartosci: " << szukana << endl;
			break;
		case 2:
			cout << endl <<"Wyszukaj wartosc z przedzialu w tablicy: ";
			cin >> szukana;
	
			for (int i = 0; i <= calkowity; i++)
			{
				if (tablica[i] == szukana)
				{
					cout << "Wartosc " << szukana << " znajduje sie pod indexem: "<< i+1 << endl;
					cout << endl;
					system("PAUSE");
					return 0;
				}
			}
			cout << "Nieznaleziono wartosci: " << szukana << endl;
			break;
		case 3:
			int najmniejsza, najwieksza;
			int index_najmniejszej, index_najwiekszej;
			for (int i = 0; i <= calkowity; i++)
			{
				if (tablica[i] < najmniejsza)
				{
					najmniejsza = tablica[i];
					index_najmniejszej = i+1;
				}
				if (najwieksza < tablica[i])
				{
					najwieksza = tablica[i];
					index_najwiekszej = i+1;
				}
			}
			cout << "MIN: (" << najmniejsza << ") na indexie: " << index_najmniejszej << endl;
			cout << "MAX: (" << najwieksza << ") na indexie: " << index_najwiekszej << endl;
			break;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}

