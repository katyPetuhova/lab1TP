#pragma once
#include "Base.h"
class Worker : public Base
{
	string job_title;
	string phone;
	string region;
public:
	void setterJob_title(string job_title);
	string getterJob_title();
	void setterPhone(string phone);
	string getterPhone();
	void setterRegion(string region);
	string getterRegion();
	Worker();
	Worker(ifstream& file);
	void Write(ofstream& file) override;
	void Show_one() override;
	void Show() override;
	void Edit(int n);
};