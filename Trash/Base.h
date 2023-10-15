#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <locale.h>
#include <Windows.h>
using namespace std;

class Base {
	string name;
public:
	void setterName(string name);
	string getterName();
	virtual void Write(ofstream& file) = 0;
	virtual void Show() = 0;
	virtual void Show_one() = 0;
	virtual void Edit(int n) = 0;
	virtual ~Base() = 0;
};
