#include <iostream>;
using namespace std;

int main()
{
	setlocale(0, "");

	cout << "[X] Program \"Figures\"\n\n";
	cout << "[1] Square\n";
	cout << "[2] Hollow square\n";
	cout << "[3] Rectangle\n";
	cout << "[4] Hollow rectangle\n";
	cout << "[5] Plusik\n";

	int userFigure;
	cin >> userFigure;
	system("cls");

	switch (userFigure)
	{
	case 1:
	{
		cout << "";
		cout << "Введите длинну стороны: ";
		short shape_size;
		cin >> shape_size;
		cout << "--------------------\n";
		for (int i = 0; i < shape_size; i++)
		{
			cout << "\t";
			for (int j = 0; j < shape_size; j++)
			{
				cout << userFigure << ' ';
			}
			cout << endl;
		}
		break;
	}
	case 2:
	{
		cout << "[X] Program \"Hollow Square\"\n\n";
		cout << "[?] Type your size: ";
		int userSize;
		cin >> userSize;
		cout << endl << endl;

		cout << "Choose your texture: ";
		char userTexture;
		cin >> userTexture;
		cout << endl << endl;

		for (int x = 0; x < userSize; x++)
		{
			cout << userTexture << " ";
		}
		cout << endl;
		for (int y = 0; y < userSize - 2; y++)
		{
			cout << userTexture << " ";
			for (int x = 0; x < userSize - 2; x++)
			{
				cout << "  ";
			}
			cout << userTexture << endl;
		}
		for (int x = 0; x < userSize; x++)
		{
			cout << userTexture << " ";
		}
		cout << endl;
		break;
	}
	case 3:
	{
		cout << "[X] Program \"Rectangle\"\n\n";
		cout << "[?] Type your height: ";
		int userHeight;
		cin >> userHeight;
		cout << endl << "[?] Type your width: ";
		int userWidth;
		cin >> userWidth;
		cout << endl << endl;

		cout << "Choose your texture: ";
		char userTexture;
		cin >> userTexture;
		cout << endl << endl;

		for (int y = 0; y < userHeight; y++)
		{
			for (int x = 0; x < userWidth; x++)
			{
				cout << userTexture << " ";
			}
			cout << endl;
		}
		break;
	}

	case 4:
	{
		cout << "[X] Program \"Hollow Rectangle\"\n\n";
		cout << "[?] Type your height: ";
		int userHeight;
		cin >> userHeight;
		cout << endl << "[?] Type your width: ";
		int userWidth;
		cin >> userWidth;
		cout << endl << endl;

		cout << "Choose your texture: ";
		char userTexture;
		cin >> userTexture;
		cout << endl << endl;

		for (int x = 0; x < userWidth; x++)
		{
			cout << userTexture << " ";
		}
		cout << endl;
		for (int y = 0; y < userHeight - 2; y++)
		{
			cout << userTexture << " ";
			for (int x = 0; x < userWidth - 2; x++)
			{
				cout << "  ";
			}
			cout << userTexture << endl;
		}
		for (int x = 0; x < userWidth; x++)
		{
			cout << userTexture << " ";
		}
		cout << endl;
		break;
	}

	
    case 5:
	{
		cout << "[X] Program \"Plus\"\n\n";
		cout << "[?] Type your size: ";
		int userSize;
		cin >> userSize;
		cout << endl << endl;

		cout << "Choose your texture: ";
		char userTexture;
		cin >> userTexture;
		cout << endl << endl;



		for (int y = 0; y < userSize; y++)
		{
			cout << "\t";
			for (int x = 0; x < userSize; x++)
			{
				if (y == userSize / 2 || x == userSize / 2)
					cout << userTexture << ' ';
				else
					cout << ". ";
			}
			cout << endl;
		}
		break;
	}
	default: "Нет такой фигуры";
		break;

	system("pauserTextureuse");
		return 0;
	}
}

