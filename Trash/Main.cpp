#include "University.h"
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "russian");
	University one;
	HANDLE hStdout;
	WORD foregroundColor; // color of string constants
	WORD foregroundColor1; // character color
	WORD backgroundColor; // background color
	WORD textAttribute; // text attribute - color
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	foregroundColor = FOREGROUND_INTENSITY |
		FOREGROUND_BLUE |
		FOREGROUND_RED;
	foregroundColor1 = FOREGROUND_INTENSITY |
		FOREGROUND_BLUE |
		FOREGROUND_GREEN |
		FOREGROUND_RED;
	backgroundColor = 0;
	SetConsoleTextAttribute(hStdout, foregroundColor1 | backgroundColor);
	char c,c1;
	int flag = 1;
	string k;
	const char* oper[] =
	{
	 "Меню:",
	 " 1 – Adding an element",
	 " 2 – Reading a list from a file",
	 " 3 – Removing an element",
	 " 4 – Displaying a list on the screen",
	 " 5 – View one item",
	 " 6 – Editing an element",
	 " 7 – Saving a list to a file",
	 " 8 - Exit the program",
	};
	int count = 1;
	while (flag != 0)
	{
		for (int i = 0; i < 9; i++)
		{
			if (count == i)
			{
				textAttribute = foregroundColor | backgroundColor;
				SetConsoleTextAttribute(hStdout, textAttribute);
				cout << oper[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(hStdout, foregroundColor1 | backgroundColor);
				cout << oper[i] << endl;
			}
		}
		c = _getch();
		if (c == 's')
		{
			system("cls");
			count++;
		}
		if (c == 'w')
		{
			system("cls");
			count--;
		}
		if (count == 0)
		{
			count = 8;
		}
		if (count == 9)
		{
			count = 1;
		}
		if (c == ' ')
		{
			if (count == 1)
			{
				system("cls");
				one.Add();
				cout << "0-Вернутся в меню: ";
				c1 = _getch();
				if (c1 == '0')
				{
					system("cls");
				}
				count = 1;
			}
			if (count == 2)
			{
				system("cls");
				one.Read();
				system("pause");
				system("cls");
				count = 1;
			}
			if (count == 3)
			{
				system("cls");
				one.Show_all();
				cout << "Select item number to delete: ";
				getline (cin,k);
				try
				{
					one - stoi(k);
				}
				catch (const char* error_message)
				{
					cout << error_message <<endl;
				}
				cout << "0-Вернутся в меню: ";
				c1 = _getch();
				if (c1 == '0')
				{
					system("cls");
				}
				count = 1;
			}
			if (count == 4)
			{
				system("cls");
				one.Show_all();
			    cout << "0-Вернутся в меню: ";
				c1 = _getch();
				if (c1 == '0')
				{
					system("cls");
				}
				count = 1;
			}
			if (count == 5)
			{
				system("cls");
				one.Show_list();
				cout << "0-Вернутся в меню: ";
				c1 = _getch();
				if (c1 == '0')
				{
					system("cls");
				}
				count = 1;
			}
			if (count == 6)
			{
				system("cls");
				one.Redakt();
				cout << "0-Вернутся в меню: ";
				c1 = _getch();
				if (c1 == '0')
				{
					system("cls");
				}
				count = 1;
			}
			if (count == 7)
			{
				one.Save();
				system("cls");
				count = 1;
			}
			if (count == 8)
			{
				SetConsoleTextAttribute(hStdout, foregroundColor1 | backgroundColor);
				system("cls");
				flag = 0;
				break;
			}
		}
	}
    return 0;
}