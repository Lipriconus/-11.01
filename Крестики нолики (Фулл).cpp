#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>

using namespace std;




void mainMenu()
{
	cout << " [#] Крестики нолики\n\n";
	cout << " [1] - Начинаем игру\n [2] - Настройки\n [3] - Правила\n [4] - Выход\n\n";
	cout << " [?] Выбирите команду: ";
	cin >> mainMenuChoise;
	cout << "\n\n";
}
void clearConsole()
{
	system("cls");
}

void startMenu()
{
	cout << " [#] Начало игры\n\n";
	cout << " [1] - Игрок vs ИИ\n [2] - Игрок vs Игрок\n [3] -Возврат в меню\n\n";
	cout << " [?] Выбирите команду : ";
	cin >> gameModeChoise;
	while (gameModeChoise < 1 || gameModeChoise > 3)
	{
		cout << "\n [!]Error! Нет такой команды.\n [?] Повторите команду: ";
		cin >> gameModeChoise;
	}
	cout << "\n\n";
}


void howToPlay()
{
	cout << " [r] Правила\n\n";
	cout << " - Игроки выбирают свой значок\n";
	cout << " - Игроки по очериди ставят отметки в пустых клетках\n";
	cout << " - Выигрывает тот игрок, который превый собрал линию\n";
	cout << "- Линии могут быть горизонтальные, вертикальные и диагональные"
	cout << " - Если все места заполнены а победителя нет,\n";
	cout << "- Тогда игра заканчивается"
    cout << " - Цифры 1-9 для поля 3x3, 1-16 для поля 4x4 and 1-25 для поля 5x5.\n\n";
	cout << " [3] Поле 3x3\n 1 2 3\n 4 5 6\n 7 8 9\n\n";
	cout << " [4] Поле 4x4\n  1  2  3  4\n  5  6  7  8\n  9 10 11 12\n 13 14 15 16\n\n";
	cout << " [5] Поле 5x5\n  1  2  3  4  5\n  6  7  8  9 10\n 11 12 13 14 15\n 16 17 18 19 20\n 21 22 23 24 25\n\n";
	system("pause");
	cout << "\n\n";
}

void settingsMenu()
{
	cout << " [s] Настройки\n\n";
	cout << " [1] - Цвет\n [2] - Первым ходит\n [3] - Размер\n [4] - Возврат в меню\n\n";
	cout << " [?] Выберите команду: ";
	cin >> settingsChoise;
	cout << "\n\n";
}

void xoColor()
{
	cout << " [c] Выбирите цвет: \n\n";
	cout << " [1] - Красный\n";
	cout << " [2] - Зеленый\n";
	cout << " [3] - Желтый\n";
	cout << " [4] - Синий\n";
	cout << " [5] - Фиолетовый\n";
	cout << " [6] - Голубой\n";
	cout << " [7] - Стандартный\n";

	cout << "\n [?] Выбирите цвет X: ";
	cin >> xColor;
	while (xColor < 1 || xColor > 7)
	{
		cout << "\n [!]Error! Такого цвета нет\n [?] Повторите команду: ";
		cin >> xColor;
		cout << endl;
	}
	cout << "\n [?] Выбирите цвет 0: ";
	cin >> oColor;
	while (oColor < 1 || oColor > 7)
	{
		cout << "\n [!]Error! Такого цвета нет \n [?] Повторите команду: ";
		cin >> oColor;
		cout << endl;
	}
	cout << "\n\n";
}

void changeGrid()
{
	cout << " [g] Размер поля\n\n";
	cout << " [1] - 3x3\n [2] - 4x4\n [3] - 5x5\n\n";
	cout << " [?] Выберите размер поля: ";
	cin >> gridChoise;
	while (gridChoise < 1 || gridChoise > 3)
	{
		cout << "\n [!]Error! Такого размера нет.\n [?] Повторите команду: ";
		cin >> gridChoise;
	}
	cout << "\n\n";
}

void changeFirstTurn()
{
	cout << " [f] Кто ходит первый\n\n";
	cout << " [1] - X\n [2] - O\n\n";
	cout << " [?] Выбирите: ";
	cin >> firstTurnChoise;
	while (firstTurnChoise < 1 || firstTurnChoise > 2)
	{
		cout << "\n [!]Такого варианта нет\n [?] Повторите команду: ";
		cin >> firstTurnChoise;
	}
	cout << "\n\n";
}







void printGameField()
{
	cout << " [#] Крестики нолики\n";
	short i = 0;
	switch (gridChoise)
	{
	case 1: i = 3; break;
	case 2: i = 4; break;
	case 3: i = 5; break;
	}
	for (short y = 0; y < i; y++)
	{
		for (short x = 0; x < i; x++)
		{
			if (gameField[x][y] == 'X' && xColor == 1)
			{
				cout << " " << clrRed + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'X' && xColor == 2)
			{
				cout << " " << clrGreen + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'X' && xColor == 3)
			{
				cout << " " << clrYellow + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'X' && xColor == 4)
			{
				cout << " " << clrBlue + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'X' && xColor == 5)
			{
				cout << " " << clrPurple + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'X' && xColor == 6)
			{
				cout << " " << clrCyan + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'O' && oColor == 1)
			{
				cout << " " << clrRed + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'O' && oColor == 2)
			{
				cout << " " << clrGreen + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'O' && oColor == 3)
			{
				cout << " " << clrYellow + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'O' && oColor == 4)
			{
				cout << " " << clrBlue + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'O' && oColor == 5)
			{
				cout << " " << clrPurple + gameField[x][y] + clrRst;
			}
			else if (gameField[x][y] == 'O' && oColor == 6)
			{
				cout << " " << clrCyan + gameField[x][y] + clrRst;
			}
			else
			{
				cout << " " << gameField[x][y];
			}
		}
		cout << endl;
	}
	cout << "\n";
}


void turnPlayerO()
{
	cout << " [O] Игрок O ходит: ";
	cin >> playerOChoise;
	if (gridChoise == 1)
	{
		switch (playerOChoise)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 4:
			if (gameField[0][1] == '#') { gameField[0][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 5:
			if (gameField[1][1] == '#') { gameField[1][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 6:
			if (gameField[2][1] == '#') { gameField[2][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 7:
			if (gameField[0][2] == '#') { gameField[0][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 8:
			if (gameField[1][2] == '#') { gameField[1][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 9:
			if (gameField[2][2] == '#') { gameField[2][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		default:
			cout << " [!] Error!\n";
			turnPlayerO();
			break;
		}
	}
	else if (gridChoise == 2)
	{
		switch (playerOChoise)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 4:
			if (gameField[3][0] == '#') { gameField[3][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 5:
			if (gameField[0][1] == '#') { gameField[0][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 6:
			if (gameField[1][1] == '#') { gameField[1][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 7:
			if (gameField[2][1] == '#') { gameField[2][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 8:
			if (gameField[3][1] == '#') { gameField[3][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 9:
			if (gameField[0][2] == '#') { gameField[0][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 10:
			if (gameField[1][2] == '#') { gameField[1][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 11:
			if (gameField[2][2] == '#') { gameField[2][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 12:
			if (gameField[3][2] == '#') { gameField[3][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 13:
			if (gameField[0][3] == '#') { gameField[0][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 14:
			if (gameField[1][3] == '#') { gameField[1][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 15:
			if (gameField[2][3] == '#') { gameField[2][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 16:
			if (gameField[3][3] == '#') { gameField[3][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		default:
			cout << " [!] Error!\n";
			turnPlayerO();
			break;
		}
	}
	else if (gridChoise == 3)
	{
		switch (playerOChoise)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 4:
			if (gameField[3][0] == '#') { gameField[3][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 5:
			if (gameField[4][0] == '#') { gameField[4][0] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 6:
			if (gameField[0][1] == '#') { gameField[0][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 7:
			if (gameField[1][1] == '#') { gameField[1][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 8:
			if (gameField[2][1] == '#') { gameField[2][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 9:
			if (gameField[3][1] == '#') { gameField[3][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 10:
			if (gameField[4][1] == '#') { gameField[4][1] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 11:
			if (gameField[0][2] == '#') { gameField[0][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 12:
			if (gameField[1][2] == '#') { gameField[1][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 13:
			if (gameField[2][2] == '#') { gameField[2][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 14:
			if (gameField[3][2] == '#') { gameField[3][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 15:
			if (gameField[4][2] == '#') { gameField[4][2] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 16:
			if (gameField[0][3] == '#') { gameField[0][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 17:
			if (gameField[1][3] == '#') { gameField[1][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 18:
			if (gameField[2][3] == '#') { gameField[2][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 19:
			if (gameField[3][3] == '#') { gameField[3][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 20:
			if (gameField[4][3] == '#') { gameField[4][3] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 21:
			if (gameField[0][4] == '#') { gameField[0][4] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 22:
			if (gameField[1][4] == '#') { gameField[1][4] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 23:
			if (gameField[2][4] == '#') { gameField[2][4] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 24:
			if (gameField[3][4] == '#') { gameField[3][4] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		case 25:
			if (gameField[4][4] == '#') { gameField[4][4] = 'O'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerO(); }
			break;
		default:
			cout << " [!] Error!\n";
			turnPlayerO();
			break;
		}
	}
	cout << endl;
}
void turnPlayerX()
{
	cout << " [X] Игрок X ходит: ";
	cin >> playerXChoise;
	if (gridChoise == 1)
	{
		switch (playerXChoise)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'X'; }
			else { cout << " [!] Клетка занята\n"; turnPlayerX(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 4:
			if (gameField[0][1] == '#') { gameField[0][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 5:
			if (gameField[1][1] == '#') { gameField[1][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 6:
			if (gameField[2][1] == '#') { gameField[2][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 7:
			if (gameField[0][2] == '#') { gameField[0][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 8:
			if (gameField[1][2] == '#') { gameField[1][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 9:
			if (gameField[2][2] == '#') { gameField[2][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		default:
			cout << " [!] Error!\n";
			turnPlayerX();
			break;
		}
	}
	else if (gridChoise == 2)
	{
		switch (playerXChoise)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 4:
			if (gameField[3][0] == '#') { gameField[3][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 5:
			if (gameField[0][1] == '#') { gameField[0][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 6:
			if (gameField[1][1] == '#') { gameField[1][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 7:
			if (gameField[2][1] == '#') { gameField[2][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 8:
			if (gameField[3][1] == '#') { gameField[3][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 9:
			if (gameField[0][2] == '#') { gameField[0][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 10:
			if (gameField[1][2] == '#') { gameField[1][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 11:
			if (gameField[2][2] == '#') { gameField[2][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 12:
			if (gameField[3][2] == '#') { gameField[3][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 13:
			if (gameField[0][3] == '#') { gameField[0][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 14:
			if (gameField[1][3] == '#') { gameField[1][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 15:
			if (gameField[2][3] == '#') { gameField[2][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 16:
			if (gameField[3][3] == '#') { gameField[3][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		default:
			cout << " [!] Error!\n";
			turnPlayerX();
			break;
		}
	}
	else if (gridChoise == 3)
	{
		switch (playerXChoise)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 4:
			if (gameField[3][0] == '#') { gameField[3][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 5:
			if (gameField[4][0] == '#') { gameField[4][0] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 6:
			if (gameField[0][1] == '#') { gameField[0][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 7:
			if (gameField[1][1] == '#') { gameField[1][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 8:
			if (gameField[2][1] == '#') { gameField[2][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 9:
			if (gameField[3][1] == '#') { gameField[3][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 10:
			if (gameField[4][1] == '#') { gameField[4][1] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 11:
			if (gameField[0][2] == '#') { gameField[0][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 12:
			if (gameField[1][2] == '#') { gameField[1][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 13:
			if (gameField[2][2] == '#') { gameField[2][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 14:
			if (gameField[3][2] == '#') { gameField[3][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 15:
			if (gameField[4][2] == '#') { gameField[4][2] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 16:
			if (gameField[0][3] == '#') { gameField[0][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 17:
			if (gameField[1][3] == '#') { gameField[1][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 18:
			if (gameField[2][3] == '#') { gameField[2][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 19:
			if (gameField[3][3] == '#') { gameField[3][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 20:
			if (gameField[4][3] == '#') { gameField[4][3] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 21:
			if (gameField[0][4] == '#') { gameField[0][4] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 22:
			if (gameField[1][4] == '#') { gameField[1][4] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 23:
			if (gameField[2][4] == '#') { gameField[2][4] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 24:
			if (gameField[3][4] == '#') { gameField[3][4] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		case 25:
			if (gameField[4][4] == '#') { gameField[4][4] = 'X'; }
			else { cout << " [!] Клетка занята!\n"; turnPlayerX(); }
			break;
		default:
			cout << " [!] Error!\n";
			turnPlayerX();
			break;
		}
	}
	cout << endl;
}

void gameWinnerCheck()
{
	if (gridChoise == 1 && winner == ' ')
	{
		if (gameField[0][0] != '#' && ((gameField[0][0] == gameField[1][0] && gameField[0][0] == gameField[2][0]) || (gameField[0][0] == gameField[0][1] && gameField[0][0] == gameField[0][2]) || (gameField[0][0] == gameField[1][1] && gameField[0][0] == gameField[2][2])))
		{
			winner = gameField[0][0];
		}
		if (gameField[2][0] != '#' && ((gameField[2][0] == gameField[2][1] && gameField[2][0] == gameField[2][2]) || (gameField[2][0] == gameField[1][1] && gameField[2][0] == gameField[0][2])))
		{
			winner = gameField[2][0];
		}
		if (gameField[1][1] != '#' && ((gameField[1][1] == gameField[1][0] && gameField[1][1] == gameField[1][2]) || (gameField[1][1] == gameField[0][1] && gameField[1][1] == gameField[2][1])))
		{
			winner = gameField[1][1];
		}
		if (gameField[1][2] != '#' && ((gameField[1][2] == gameField[0][2] && gameField[1][2] == gameField[2][2])))
		{
			winner = gameField[1][2];
		}
	}
	else if (gridChoise == 2 && winner == ' ')
	{
		if (gameField[0][0] != '#' && ((gameField[0][0] == gameField[1][0] && gameField[0][0] == gameField[2][0] && gameField[0][0] == gameField[3][0]) || (gameField[0][0] == gameField[1][1] && gameField[0][0] == gameField[2][2] && gameField[0][0] == gameField[3][3]) || (gameField[0][0] == gameField[0][1] && gameField[0][0] == gameField[0][2] && gameField[0][0] == gameField[0][3])))
		{
			winner = gameField[0][0];
		}
		if (gameField[3][0] != '#' && ((gameField[3][0] == gameField[3][1] && gameField[3][0] == gameField[3][2] && gameField[3][0] == gameField[3][3]) || (gameField[3][0] == gameField[2][1] && gameField[3][0] == gameField[1][2] && gameField[3][0] == gameField[0][3])))
		{
			winner = gameField[3][0];
		}
		if (gameField[1][1] != '#' && ((gameField[1][1] == gameField[1][0] && gameField[1][1] == gameField[1][2] && gameField[1][1] == gameField[1][3]) || (gameField[1][1] == gameField[0][1] && gameField[1][1] == gameField[2][1] && gameField[1][1] == gameField[3][1])))
		{
			winner = gameField[1][1];
		}
		if (gameField[2][2] != '#' && ((gameField[2][2] == gameField[0][2] && gameField[2][2] == gameField[1][2] && gameField[2][2] == gameField[3][2]) || (gameField[2][2] == gameField[2][3] && gameField[2][2] == gameField[2][1] && gameField[2][2] == gameField[2][0])))
		{
			winner = gameField[0][0];
		}
		if (gameField[3][3] != '#' && ((gameField[3][3] == gameField[2][3] && gameField[3][3] == gameField[1][3] && gameField[3][3] == gameField[0][3])))
		{
			winner = gameField[3][3];
		}
	}
	else if (gridChoise == 3 && winner == ' ')
	{
		if (gameField[0][0] != '#' && ((gameField[0][0] == gameField[1][0] && gameField[0][0] == gameField[2][0] && gameField[0][0] == gameField[3][0] && gameField[0][0] == gameField[4][0]) || (gameField[0][0] == gameField[1][1] && gameField[0][0] == gameField[2][2] && gameField[0][0] == gameField[3][3] && gameField[0][0] == gameField[4][4]) || (gameField[0][0] == gameField[0][1] && gameField[0][0] == gameField[0][2] && gameField[0][0] == gameField[0][3] && gameField[0][0] == gameField[0][4])))
		{
			winner = gameField[0][0];
		}
		if (gameField[4][0] != '#' && ((gameField[4][0] == gameField[4][1] && gameField[4][0] == gameField[4][2] && gameField[4][0] == gameField[4][3] && gameField[4][0] == gameField[4][4]) || (gameField[4][0] == gameField[3][1] && gameField[4][0] == gameField[2][2] && gameField[4][0] == gameField[1][3] && gameField[4][0] == gameField[0][4])))
		{
			winner = gameField[4][0];
		}
		if (gameField[1][1] != '#' && ((gameField[1][1] == gameField[1][0] && gameField[1][1] == gameField[1][2] && gameField[1][1] == gameField[1][3] && gameField[1][1] == gameField[1][4]) || (gameField[1][1] == gameField[0][1] && gameField[1][1] == gameField[2][1] && gameField[1][1] == gameField[3][1] && gameField[1][1] == gameField[4][1])))
		{
			winner = gameField[1][1];
		}
		if (gameField[2][2] != '#' && ((gameField[2][2] == gameField[2][0] && gameField[2][2] == gameField[2][1] && gameField[2][2] == gameField[2][3] && gameField[2][2] == gameField[2][4]) || (gameField[2][2] == gameField[0][2] && gameField[2][2] == gameField[1][2] && gameField[2][2] == gameField[3][2] && gameField[2][2] == gameField[4][2])))
		{
			winner = gameField[2][2];
		}
		if (gameField[3][3] != '#' && ((gameField[3][3] == gameField[3][0] && gameField[3][3] == gameField[3][1] && gameField[3][3] == gameField[3][2] && gameField[3][3] == gameField[3][4]) || (gameField[3][3] == gameField[0][3] && gameField[3][3] == gameField[1][3] && gameField[3][3] == gameField[2][3] && gameField[3][3] == gameField[4][3])))
		{
			winner = gameField[3][3];
		}
		if (gameField[4][4] != '#' && ((gameField[4][4] == gameField[0][4] && gameField[4][4] == gameField[1][4] && gameField[4][4] == gameField[2][4] && gameField[4][4] == gameField[3][4])))
		{
			winner = gameField[4][4];
		}
	}
}

void gameFieldOverflowCheck()
{
	short i = 0;
	short emptySpaceCount = 0;
	switch (gridChoise)
	{
	case 1: i = 3; break;
	case 2: i = 4; break;
	case 3: i = 5; break;
	}
	for (short y = 0; y < i; y++)
	{
		for (short x = 0; x < i; x++)
		{
			if (gameField[x][y] == '#')
			{
				emptySpaceCount++;
			}
		}
	}
	if (emptySpaceCount == 0)
	{
		fieldOverflowStatus = 1;
	}
	else
	{
		fieldOverflowStatus = 0;
	}
}

void turnCPUDummy()
{
	if (gridChoise == 1)
	{
		turnCPU = 1 + rand() % 9;
		switch (turnCPU)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 4:
			if (gameField[0][1] == '#') { gameField[0][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 5:
			if (gameField[1][1] == '#') { gameField[1][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 6:
			if (gameField[2][1] == '#') { gameField[2][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 7:
			if (gameField[0][2] == '#') { gameField[0][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 8:
			if (gameField[1][2] == '#') { gameField[1][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 9:
			if (gameField[2][2] == '#') { gameField[2][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		default:
			break;
		}
	}
	else if (gridChoise == 2)
	{
		turnCPU = 1 + rand() % 16;
		switch (turnCPU)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 4:
			if (gameField[3][0] == '#') { gameField[3][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 5:
			if (gameField[0][1] == '#') { gameField[0][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 6:
			if (gameField[1][1] == '#') { gameField[1][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 7:
			if (gameField[2][1] == '#') { gameField[2][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 8:
			if (gameField[3][1] == '#') { gameField[3][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 9:
			if (gameField[0][2] == '#') { gameField[0][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 10:
			if (gameField[1][2] == '#') { gameField[1][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 11:
			if (gameField[2][2] == '#') { gameField[2][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 12:
			if (gameField[3][2] == '#') { gameField[3][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 13:
			if (gameField[0][3] == '#') { gameField[0][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 14:
			if (gameField[1][3] == '#') { gameField[1][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 15:
			if (gameField[2][3] == '#') { gameField[2][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 16:
			if (gameField[3][3] == '#') { gameField[3][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		default:
			break;
		}
	}
	else if (gridChoise == 3)
	{
		turnCPU = 1 + rand() % 25;
		switch (turnCPU)
		{
		case 1:
			if (gameField[0][0] == '#') { gameField[0][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 2:
			if (gameField[1][0] == '#') { gameField[1][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 3:
			if (gameField[2][0] == '#') { gameField[2][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 4:
			if (gameField[3][0] == '#') { gameField[3][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 5:
			if (gameField[4][0] == '#') { gameField[4][0] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 6:
			if (gameField[0][1] == '#') { gameField[0][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 7:
			if (gameField[1][1] == '#') { gameField[1][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 8:
			if (gameField[2][1] == '#') { gameField[2][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 9:
			if (gameField[3][1] == '#') { gameField[3][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 10:
			if (gameField[4][1] == '#') { gameField[4][1] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 11:
			if (gameField[0][2] == '#') { gameField[0][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 12:
			if (gameField[1][2] == '#') { gameField[1][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 13:
			if (gameField[2][2] == '#') { gameField[2][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 14:
			if (gameField[3][2] == '#') { gameField[3][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 15:
			if (gameField[4][2] == '#') { gameField[4][2] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 16:
			if (gameField[0][3] == '#') { gameField[0][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 17:
			if (gameField[1][3] == '#') { gameField[1][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 18:
			if (gameField[2][3] == '#') { gameField[2][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 19:
			if (gameField[3][3] == '#') { gameField[3][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 20:
			if (gameField[4][3] == '#') { gameField[4][3] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 21:
			if (gameField[0][4] == '#') { gameField[0][4] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 22:
			if (gameField[1][4] == '#') { gameField[1][4] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 23:
			if (gameField[2][4] == '#') { gameField[2][4] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 24:
			if (gameField[3][4] == '#') { gameField[3][4] = 'O'; }
			else { turnCPUDummy(); }
			break;
		case 25:
			if (gameField[4][4] == '#') { gameField[4][4] = 'O'; }
			else { turnCPUDummy(); }
			break;
		default:;
			break;
		}
	}
	cout << endl;
}

void clearGameField()
{
	for (short y = 0; y < 5; y++)
	{
		for (short x = 0; x < 5; x++)
		{
			gameField[x][y] = '#';
		}
	}
}

int main()
{
	setlocale(0, "");

	clearConsole();
	mainMenu();

	srand(time(NULL));

	switch (mainMenuChoise)
	{
	case 1:
		clearConsole();
		startMenu();
		clearConsole();
		if (gameModeChoise == 1) 
		{
			if (firstTurnChoise == 1) 
			{
				while (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
				{
					clearConsole();
					printGameField();
					turnPlayerX();
					gameWinnerCheck();
					gameFieldOverflowCheck();
					if (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
					{
						clearConsole();
						printGameField();
						turnCPUDummy();
						gameWinnerCheck();
						gameFieldOverflowCheck();
					}
				}
				if (winner == 'X')
				{
					clearConsole();
					cout << " [w] Ты победил!!!\n\n";
					winner = ' ';
				}
				else if (winner == 'O')
				{
					clearConsole();
					cout << " [l] Увы но ты проиграл \n\n";
					winner = ' ';
				}
				else
				{
					clearConsole();
					cout << " [d] Игра проиграна!\n\n";
					fieldOverflowStatus = 0;
				}
				clearGameField();
			}
			if (firstTurnChoise == 2) 
			{
				while (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
				{
					clearConsole();
					printGameField();
					turnCPUDummy();
					gameWinnerCheck();
					gameFieldOverflowCheck();
					if (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
					{
						clearConsole();
						printGameField();
						turnPlayerX();
						gameWinnerCheck();
						gameFieldOverflowCheck();
					}
				}
				if (winner == 'X')
				{
					clearConsole();
					cout << " [w] Ты победил!\n\n";
					winner = ' ';
				}
				else if (winner == 'O')
				{
					clearConsole();
					cout << " [l] Ты проиграл =(\n\n";
					winner = ' ';
				}
				else
				{
					clearConsole();
					cout << " [d] Игра проиграна!!\n\n";
					fieldOverflowStatus = 0;
				}
				clearGameField();
			}
		}
		else if (gameModeChoise == 2)
		{
			if (firstTurnChoise == 1) 
			{
				while (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
				{
					clearConsole();
					printGameField();
					turnPlayerX();
					gameWinnerCheck();
					gameFieldOverflowCheck();
					if (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
					{
						clearConsole();
						printGameField();
						turnPlayerO();
						gameWinnerCheck();
						gameFieldOverflowCheck();
					}
				}
				if (winner == 'X')
				{
					clearConsole();
					cout << " [x] Выйграл игрок X\n\n";
					winner = ' ';
				}
				else if (winner == 'O')
				{
					clearConsole();
					cout << " [o] Выйграл игрок О\n\n";
					winner = ' ';
				}
				else
				{
					clearConsole();
					
					fieldOverflowStatus = 0;
				}
				clearGameField();
			}
			if (firstTurnChoise == 2) 
			{
				while (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
				{
					clearConsole();
					printGameField();
					turnPlayerO();
					gameWinnerCheck();
					gameFieldOverflowCheck();
					if (winner != 'X' && winner != 'O' && fieldOverflowStatus == 0)
					{
						clearConsole();
						printGameField();
						turnPlayerX();
						gameWinnerCheck();
						gameFieldOverflowCheck();
					}
				}
				if (winner == 'X')
				{
					clearConsole();
					cout << " [x] Игрок X победил\n\n";
					winner = ' ';
				}
				else if (winner == 'O')
				{
					clearConsole();
					cout << " [o] Игрок O победил\n\n";
					winner = ' ';
				}
				else
				{
					clearConsole();
					
					fieldOverflowStatus = 0;
				}
				clearGameField();
			}
		}
		else if (gameModeChoise == 3)
		{
			main();
		}
		system("pause");
		main();
	case 2:
		clearConsole();
		settingsMenu();
		switch (settingsChoise)
		{
		case 1:
			clearConsole();
			
			xoColor();
			clearConsole();
			main();
		case 2:
			clearConsole();
			changeFirstTurn();
			clearConsole();
			main();
		case 3:
			clearConsole();
			changeGrid();
			clearConsole();
			main();
		case 4:
			clearConsole();
			main();
		default:
			cout << "\n ПФФФ";
			short _; cin >> _;
			main();
		}
	case 3:
		clearConsole();
		howToPlay();
		clearConsole();
		main();
	case 4:
		clearConsole();
		cout << " [T_T] Адиос\n\n";
		exit(777);
	default:
		main();
	}

	system("pause");

	return 777;
}
short mainMenuChoise, settingsChoise, gridChoise = 1, firstTurnChoise = 1, gameModeChoise, playerXChoise, playerOChoise, turnCPU, fieldOverflowStatus = 0, xColor = 2, oColor = 5;
char gameField[5][5] = { { '#', '#', '#', '#', '#' }, {'#', '#', '#', '#', '#'}, {'#', '#', '#', '#', '#'}, {'#', '#', '#', '#', '#'} , {'#', '#', '#', '#', '#'} };
char winner = ' ';
string clrRed = "\033[31m", clrGreen = "\033[32m", clrYellow = "\033[33m", clrBlue = "\033[34m", clrPurple = "\033[35m", clrCyan = "\033[36m", clrRst = "\033[0m";