#include <iostream>
#include <string>

int main()
{
	using namespace std;

	setlocale(LC_ALL, "rus");

	int numberOfSymbol;
	int i = 0;
	char typeOfSymbol;
	char symbol;

	char horizon = 'h';
	char vertical = 'v';

	const char indent = '\n';
	const char secondIndent = '\t';
	cout << "¬ведите кол-во символов: ";
	cin >> numberOfSymbol;
	cout << "¬ведите символ: ";
	cin >> symbol;
	cout << "¬ведите тип линии: ";
	cin >> typeOfSymbol;

	if (typeOfSymbol == horizon)
	{
		cout << indent << secondIndent;
		while (i < numberOfSymbol)
		{
			cout << symbol;
			i++;
		}
		cout << endl;
	}
	else if (typeOfSymbol == vertical)
	{
		cout << indent;
		while (i < numberOfSymbol)
		{
			cout << secondIndent << secondIndent << secondIndent << symbol << endl;
			i++;
		}
	}
	else
	{
		cout << "ќшибка: неверно введены данные!";
	}

}