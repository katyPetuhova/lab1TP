#pragma once
#include "Base.h"
#include "Student.h"
#include "Teacher.h"
#include "Worker.h"
class University
{
	Base** ptr;
	int n;
public:
	University();
	University(const University& object);
	void setterN(int n);
	int getterN();
	void Read();
	void Save();
	void Show_all();
	void Redakt();
	int Show_list();
	University operator-(int number);
	void Add();
	~University();
};