#include <iostream>
#include <string>

using namespace std;

string TrimSpaces(string text)
{
	for(int i=0; i < text.length(); i++)
	{
		if(text[i] == ' ')
		{
			int j;
			for(j = i+1; j < text.length(); j++)
			{
				text[j-1] = text[j];
			}
			text[j-1] = '\0';
		}
	}
	return text;
}

int main()
{
	string text = "Ala ma kota";
	string trimedtext;
	trimedtext = TrimSpaces(text);
	cout << trimedtext << endl;
	system("PAUSE");
	return 0;
}

