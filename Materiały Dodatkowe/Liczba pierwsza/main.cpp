#include <cstdio>
#include <iostream>

using namespace std;

// liczba pierwsza

bool checkPrimary(int liczba)
{
	for (int i=2; i < liczba; i++)
	{
		if (liczba%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int liczba = 0;
	cout << "Wpisz liczbe: ";
	cin >> liczba;
	string wynik = " nie jest liczba pierwsza";
	if (checkPrimary(liczba))
		wynik = " jest liczba pierwsza";
	cout << liczba << wynik << endl;
	system("PAUSE");
	return 0;
}

