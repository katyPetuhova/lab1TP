#pragma once
#include "Base.h"
class Teacher : public Base
{
	string* groups;
	int n1;
	string* lessons;
	int n2;
public:
	void setterN1(int n1);
	int getterN1();
	void setterN2(int n2);
	int getterN2();
	void setterGroups(string groups, int i);
	string getterGroups(int i);
	void setterLessons(string lessons, int i);
	string getterLessons(int i);
	Teacher();
	Teacher(ifstream& file);
	void Write(ofstream& file) override;
	void Show_one() override;
	void Show() override;
	void Edit(int n) override;
	~Teacher();
};