#pragma once
#include "Base.h"
class Student : public Base
{
	string group;
	string speciality;
	string course;
	string grade;
public:
	void setterGroupe(string group);
	string getterGroupe();
	void setterSpeciality(string speciality);
	string getterSpeciality();
	void setterCourse(string course);
	string getterCourse();
	void setterGrade(string grade);
	string getterGrade();
	Student();
	Student(ifstream& file);
	void Write(ofstream& file) override;
	void Show_one() override;
	void Show() override;
	void Edit(int n) override;
};