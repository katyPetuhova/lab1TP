#include "University.h"
University::University() {};

University::University(const University& object)
{
	this->ptr = new Base * [object.n];

	for (int i = 0; i < object.n; i++)
	{
		ptr[i] = object.ptr[i];
	}
}

void University::setterN(int n) { this->n = n; }
int University::getterN() { return n; }

void University::Read()
{
	ifstream file;
	file.open("test.txt");
	string line;
	getline(file, line);
	int size = stoi(line);
	setterN(size);
	ptr = new Base * [size];
	getline(file, line);
	int i = 0;
	while (!file.eof() && i < size)
	{
		if (line == "Student")
		{
			ptr[i] = new Student(file);
			i++;
		}
		if (line == "Teacher")
		{
			ptr[i] = new Teacher(file);
			i++;
		}
		if (line == "Worker")
		{
			ptr[i] = new Worker(file);
			i++;
		}
		getline(file, line);
	}
}

void University::Save()
{
	ofstream file;
	file.open("test.txt");
	file << n << endl;
	for (int i = 0; i < n; i++)
	{
		ptr[i]->Write(file);
	}

}

void University::Show_all()
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ".";
		ptr[i]->Show();
		cout << "\n";
	}

}

void University::Redakt()
{
	int number = Show_list();
	string item;
	char c = '0';
	while (c != '2')
	{
		if (c == '1' || c == '0')
		{
			cout << "Select an item to change: ";
			getline(cin, item);
		}
		ptr[number - 1]->Edit(stoi(item));
		system("cls");
		ptr[number - 1]->Show();
		cout << "Continue editing?\n1.Yes\n2.No\nEnter the number: ";
		c = _getch();
		cout << c << "\n";
	}
}

int University::Show_list()
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ".";
		ptr[i]->Show_one();
	}
	cout << "Select list number: ";
	string number;
	getline(cin, number);
	system("cls");
	ptr[stoi(number) - 1]->Show();
	return stoi(number);
}

University University::operator-(int number)
{
	if (getterN() == 0)
	{
		throw "The list is empty";
	}
	if (number<1 || number>getterN())
	{
		throw "There is no such element in the list";
	}
	University buf(*this);
	setterN(getterN() - 1);
	ptr = new Base * [getterN()];
	for (int i = 0; i < number - 1; i++)
	{
		ptr[i] = buf.ptr[i];
	}
	for (int i = number - 1; i < getterN(); i++)
	{
		ptr[i] = buf.ptr[i + 1];
	}
	return *this;
}

void University::Add()
{
	Base** buf;
	buf = new Base * [getterN()];
	for (int i = 0; i < getterN(); i++)
	{
		buf[i] = ptr[i];
	}
	setterN(getterN() + 1);
	ptr = new Base * [getterN()];
	for (int i = 0; i < getterN() - 1; i++)
	{
		ptr[i] = buf[i];
	}
	cout << "1 - Student\n2 - Teacher\n3 - Worker\nSelect the element type to create: ";
	string c1;
	getline(cin, c1);
	system("cls");
	if (c1 == "1")
	{
		ptr[getterN() - 1] = new Student();
	}
	if (c1 == "2")
	{
		ptr[getterN() - 1] = new Teacher();
	}
	if (c1 == "3")
	{
		ptr[getterN() - 1] = new Worker();
	}
}

University::~University()
{
	cout << "\nRunning a destructor ~University()\n";
	delete ptr;
}