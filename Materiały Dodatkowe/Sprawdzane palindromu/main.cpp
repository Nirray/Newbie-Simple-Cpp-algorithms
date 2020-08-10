#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string text)
{
	bool wynik = true;
	for (int i=0; i<text.length()/2;i++)
	{

		if (text[i]!=text[text.length()-i-1])
		{
			wynik = false;
			break;
		}
	}
	return wynik;
}
int main()
{
	string text = "kajak";
	string wynik = "NIE";
	if (isPalindrome(text))
		wynik = "TAK";
	cout << "Czy '" << text <<"' jest palindromem? " << wynik << endl;
	system("PAUSE");
	return 0;
}

