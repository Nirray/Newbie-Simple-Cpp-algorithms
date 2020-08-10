#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int liczba; // za³o¿enie zak³ada u¿ycie liczby ca³kowitej
long double silnia = 1; // za³o¿enie zak³ada u¿ycie liczby long double

long double LiczSilnia(int liczba)
{
	for (int i=1; i<=liczba;i++)
	{
		silnia*= i;
	}
	return silnia;
}

int main()
{
	cout << "Wpisz silnie: " ;
	cin >> liczba;

	if (liczba < 0)
	{
			cout << "Liczba nie moze byc ujemna."<< endl;
			return(0);
	}
	
	cout<< "Wynik: "<< setprecision(0) << fixed << LiczSilnia(liczba) << endl;
	cout << endl;
	system("PAUSE");
	return(0);
}

