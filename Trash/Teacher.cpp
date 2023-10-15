#include "Teacher.h"
void Teacher::setterN1(int n1) { this->n1 = n1; groups = new string[n1]; }
int Teacher::getterN1() { return n1; }
void Teacher::setterN2(int n2) { this->n2 = n2; lessons = new string[n2]; }
int Teacher::getterN2() { return n2; }
void Teacher::setterGroups(string groups, int i) { this->groups[i] = groups; }
string Teacher::getterGroups(int i) { return groups[i]; }
void Teacher::setterLessons(string lessons, int i) { this->lessons[i] = lessons; }
string Teacher::getterLessons(int i) { return lessons[i]; }
Teacher::Teacher()
{
	cout << "Running a constructor Teacher()\n";
	system("pause");
	system("cls");
	cout << "Teacher:" << endl;
	string line;
	cout << "Full name: ";
	getline(cin, line);
	setterName(line);
	cout << "Number of groups: ";
	getline(cin, line);
	int n = stoi(line);
	setterN1(n);
	cout << "Groups: \n";
	for (int i = 0; i < n; i++)
	{
		getline(cin, line);
		setterGroups(line, i);
	}
	cout << "Number of lessons: ";
	getline(cin, line);
	n = stoi(line);
	setterN2(n);
	cout << "Lessons: \n";
	for (int i = 0; i < n; i++)
	{
		getline(cin, line);
		setterLessons(line, i);
	}
}
Teacher::Teacher(ifstream& file)
{
	string line;
	cout << "Running a constructor Teacher(parameter)\n";
	getline(file, line);
	setterName(line);
	getline(file, line);
	int n = stoi(line);
	setterN1(n);
	for (int i = 0; i < n; i++)
	{
		getline(file, line);
		setterGroups(line, i);
	}
	getline(file, line);
	n = stoi(line);
	setterN2(n);
	for (int i = 0; i < n; i++)
	{
		getline(file, line);
		setterLessons(line, i);
	}
};
void Teacher::Write(ofstream& file)
{
	file << "Teacher" << endl;
	file << getterName() << endl;
	file << getterN1() << endl;
	for (int i = 0; i < getterN1(); i++)
	{
		file << getterGroups(i) << endl;
	}
	file << getterN2() << endl;
	for (int i = 0; i < getterN2(); i++)
	{
		file << getterLessons(i) << endl;
	}
}
void Teacher::Show_one()
{
	cout << " Teacher: " << getterName() << endl;
}
void Teacher::Show()
{
	cout << " Teacher:" << endl;
	cout << "   Full name: " << getterName() << endl;
	cout << "   Number of groups: " << getterN1() << endl;
	for (int i = 0; i < getterN1(); i++)
	{
		cout << "   " << getterGroups(i) << endl;
	}
	cout << "   Number of lessons: " << getterN2() << endl;
	for (int i = 0; i < getterN2(); i++)
	{
		cout << "   " << getterLessons(i) << endl;
	}
}
void Teacher::Edit(int n)
{
	string line;
	if (n == 1)
	{
		cout << "Full name: ";
		getline(cin, line);
		setterName(line);
	}
	if (n == 2)
	{
		cout << "Number of groups: ";
		getline(cin, line);
		int k = stoi(line);
		setterN1(k);
		cout << "Groups: \n";
		for (int i = 0; i < k; i++)
		{
			getline(cin, line);
			setterGroups(line, i);
		}
	}
	if (n == 3)
	{
		cout << "Number of lessons: ";
		getline(cin, line);
		int k = stoi(line);
		setterN2(k);
		cout << "Lessons: \n";
		for (int i = 0; i < k; i++)
		{
			getline(cin, line);
			setterLessons(line, i);
		}
	}
}
Teacher::~Teacher()
{
	cout << "\nRunning a destructor ~Teacher()\n";
	delete groups;
	delete lessons;
}