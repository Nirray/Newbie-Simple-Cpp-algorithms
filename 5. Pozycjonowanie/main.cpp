#include <iostream>
#include <windows.h>

using namespace std;

char labirynt[18][52] = {

"[-------------------------------------------------]",
"|X                 XX              XXX   XXXXXXXXX|",
"|X XXXXXXXXXXXXXX  XX  XXXXXXXXXXX XXX   XXXX    X|",
"|X X           XX        XXXX            XXX  *  X|",
"|X X           XXXXXXXXXXXXXXXXXXX XXXXXXXXXX   XX|",
"|X XXXX        XX               XX XX      XXX  XX|",
"|X   XX        XX               XX XX  XX         |",
"|XXXXXXXXXXXXXXXX               XX XX   XXXXXXXX  |",
"|              XX               XX XX         XX  |",
"|              XX               XX XX  XXXXX  XX  |",
"|              XX               XX XX    XXX  XXXX|",
"|              XX               XX XXXX XX        |",
"|              XXXXXXXXXXXXXXXXXXX   XX XXXXXXX XX|",
"|              XX                    XX XX        |",
"|              XX  XXXXXXXXXXXXXXX   XXXXX XXXXXXX|",
"|              XX  XX       XX   XXXXXXXXX XXXXXXX|",
"|              XX      XXX                 XX     |",
"[-------------------------------------------------]" };

bool ruch = true;

int main()
{
	labirynt[6][4] = 'o';
	while (ruch == true)
	{
		system("CLS");
		for (int y = 0; y < 18; y++)
		{
			cout << labirynt[y] << endl;
		}
		for (int y = 0; y < 18; y++)
		{
			for (int x = 0; x < 52; x++)
			{
				switch (labirynt[y][x])
				{
				case 'o':
				{
					// poruszanie siê w górê
					if (GetAsyncKeyState(VK_UP) != 0)
					{
						int y2 = (y - 1);

						switch (labirynt[y2][x])
						{
						case ' ':
						{
							labirynt[y][x] = ' ';
							y -= 1;
							labirynt[y2][x] = 'o';
						}
						break;
						}
					}
					// poruszanie siê w dó³
					if (GetAsyncKeyState(VK_DOWN) != 0)
					{
						int y2 = (y + 1);

						switch (labirynt[y2][x])
						{
						case ' ':
						{
							labirynt[y][x] = ' ';
							y += 1;
							labirynt[y2][x] = 'o';
						}
						break;
						}
					}
					// poruszanie siê w prawo
					if (GetAsyncKeyState(VK_RIGHT) != 0)
					{
						int x2 = (x + 1);
						switch (labirynt[y][x2])
						{
						case ' ':
						{
							labirynt[y][x] = ' ';
							x += 1;
							labirynt[y][x2] = 'o';
						}
						break;
						}
					}
					// poruszanie siê w lewo
					if (GetAsyncKeyState(VK_LEFT) != 0)
					{
						int x2 = (x - 1);
						switch (labirynt[y][x2])
						{
						case ' ':
						{
							labirynt[y][x] = ' ';
							x -= 1;
							labirynt[y][x2] = 'o';
						}
						}
					}
				}
			}
		}
	}
}
	// "odœwie¿anie"
	while (ruch)
	{
		system("CLS");
		for (int y = 0; y < 18; y++)
		{
			cout << labirynt[y] << endl;
		}
		return 0;
	}
}
