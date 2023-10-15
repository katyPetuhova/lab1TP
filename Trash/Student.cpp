#include "Student.h"
void Student::setterGroupe(string group) { this->group = group; }
string Student::getterGroupe() { return group; }
void Student::setterSpeciality(string speciality) { this->speciality = speciality; }
string Student::getterSpeciality() { return speciality; }
void Student::setterCourse(string course) { this->course = course; }
string Student::getterCourse() { return course; }
void Student::setterGrade(string grade) { this->grade = grade; }
string Student::getterGrade() { return grade; }
Student::Student()
{
	cout << "Running a constructor Student()\n";
	system("pause");
	system("cls");
	cout << "Student:" << endl;
	string line;
	cout << "Full name: ";
	getline(cin, line);
	setterName(line);
	cout << "Groupe: ";
	getline(cin, line);
	setterGroupe(line);
	cout << "Speciality: ";
	getline(cin, line);
	setterSpeciality(line);
	cout << "Course: ";
	getline(cin, line);
	setterCourse(line);
	cout << "Grade: ";
	getline(cin, line);
	setterGrade(line);
}
Student::Student(ifstream& file)
{
	string line;
	cout << "Running a constructor Student(parameter)\n";
	getline(file, line);
	setterName(line);
	getline(file, line);
	setterGroupe(line);
	getline(file, line);
	setterSpeciality(line);
	getline(file, line);
	setterCourse(line);
	getline(file, line);
	setterGrade(line);
};

void Student::Write(ofstream& file)
{
	file << "Student" << endl;
	file << getterName() << endl;
	file << getterGroupe() << endl;
	file << getterSpeciality() << endl;
	file << getterCourse() << endl;
	file << getterGrade() << endl;
}

void Student::Show_one()
{
	cout << " Student: " << getterName() << endl;
}

void Student::Show()
{
	cout << " Student:" << endl;
	cout << "   Full name: " << getterName() << endl;
	cout << "   Groupe: " << getterGroupe() << endl;
	cout << "   Speciality: " << getterSpeciality() << endl;
	cout << "   Course: " << getterCourse() << endl;
	cout << "   Grade: " << getterGrade() << endl;
}

void Student::Edit(int n)
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
		cout << "Groupe: ";
		getline(cin, line);
		setterGroupe(line);
	}
	if (n == 3)
	{
		cout << "Speciality: ";
		getline(cin, line);
		setterSpeciality(line);
	}
	if (n == 4)
	{
		cout << "Course: ";
		getline(cin, line);
		setterCourse(line);
	}
	if (n == 5)
	{
		cout << "Grade: ";
		getline(cin, line);
		setterGrade(line);
	}
}