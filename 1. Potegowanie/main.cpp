#include <iostream>
#include <cstdlib>
#include <math.h>

// za³o¿enia: potêgowanie, zwyk³e/funkcja pow - math.h/zwracanie informacji - zabezpieczenie przed liczb¹ negatywn¹, trzeci wariant -> wyk³adnik jest ujemny.
// Micha³ Lipiñski - 1BDI

using namespace std;
// deklaracja zmiennych
int opcja;
float podstawa, wykladnik;
float wynik = 1;

int OwnPower(float podstawa, float wykladnik)
{
	if (wykladnik < 0)
	{
		cout << "Wykladnik nie moze byc mniejszy od zera dla tej opcji - skorzystaj z opcji numer 3." << endl;
		return 0;
	}
	for (int i = 0; i < wykladnik; i++)
		wynik *= podstawa;

	return wynik;
}

// wystarczy w switchu wpisaæ po prostu pow(podstawa, wykladnik) aby zaoszczedzic miejsca w kodzie, ale chcia³em pokazaæ wyraŸn¹ ró¿nicê

float PowFromMathLib(float podstawa, float wykladnik)
{
	// funkcja "pow" przyjmuje dwie liczby x i y -> double __cdecl pow(double _X,double _Y); zadeklarowane w pliku math.h
	return pow(podstawa, wykladnik);
}

float NegativePow(float podstawa, int wykladnik)
{
	if (wykladnik == 0)
		return 1;
	if(wykladnik>0)
	{
		while (wykladnik--)
		{
			wynik *= podstawa;
		}
		return wynik;	
	}
	else
	{
		while(wykladnik++)
		{
			wynik*=podstawa;
		}
		return 1/wynik;
	}
}

int main() {
	cout << "Wybierz sposob potegowania:" << endl << "1. Potegowanie przez wlasna funkcje" << endl 
	<< "2. Potegowanie przez funkcje z biblioteki math.h (pow)" << endl 
	<< "3. Potegowanie przez wlasna funkcje z uwzglednieniem negatywnych wykladnikow."<< endl;
	
	cin >> opcja;
	switch (opcja)
	{
		case 1: 
			cout << "Podaj liczbe (podstawa): ";
			cin >> podstawa;
			cout << "Podaj liczbe (wykladnik): ";
			cin >> wykladnik;
			cout << "Wynik: " << OwnPower(podstawa, wykladnik);
			break;
		case 2: 
			cout << "Podaj liczbe (podstawa): ";
			cin >> podstawa;
			cout << "Podaj liczbe (wykladnik): ";
			cin >> wykladnik;
			cout << "Wynik: " << PowFromMathLib(podstawa, wykladnik);
			break;
		case 3: 
			cout << "Podaj liczbe (podstawa): ";
			cin >> podstawa;
			cout << "Podaj liczbe (wykladnik): ";
			cin >> wykladnik;
			cout << "Wynik: " << NegativePow(podstawa, wykladnik);
			break;
		default:
			break;
	
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
