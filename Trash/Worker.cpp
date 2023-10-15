#include "Worker.h"
void Worker::setterJob_title(string job_title) { this->job_title = job_title; }
string Worker::getterJob_title() { return job_title; }
void Worker::setterPhone(string phone) { this->phone = phone; }
string Worker::getterPhone() { return phone; }
void Worker::setterRegion(string region) { this->region = region; }
string Worker::getterRegion() { return region; }
Worker::Worker()
{
	cout << "Running a constructor Worker()\n";
	system("pause");
	system("cls");
	cout << "Worker:" << endl;
	string line;
	cout << "Full name: ";
	getline(cin, line);
	setterName(line);
	cout << "Job title: ";
	getline(cin, line);
	setterJob_title(line);
	cout << "Phone: ";
	getline(cin, line);
	setterPhone(line);
	cout << "Area of responsibility: ";
	getline(cin, line);
	setterRegion(line);
}
Worker::Worker(ifstream& file)
{
	string line;
	cout << "Running a constructor Worker(parameter)\n";
	getline(file, line);
	setterName(line);
	getline(file, line);
	setterJob_title(line);
	getline(file, line);
	setterPhone(line);
	getline(file, line);
	setterRegion(line);
};

void Worker::Write(ofstream& file)
{
	file << "Worker" << endl;
	file << getterName() << endl;
	file << getterJob_title() << endl;
	file << getterPhone() << endl;
	file << getterRegion() << endl;
}

void Worker::Show_one()
{
	cout << " Worker: " << getterName() << endl;
}

void Worker::Show()
{
	cout << " Worker:" << endl;
	cout << "   Full name: " << getterName() << endl;
	cout << "   Job title: " << getterJob_title() << endl;
	cout << "   Phone: " << getterPhone() << endl;
	cout << "   Area of responsibility: " << getterRegion() << endl;
}

void Worker::Edit(int n)
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
		cout << "Job title: ";
		getline(cin, line);
		setterJob_title(line);
	}
	if (n == 3)
	{
		cout << "Phone: ";
		getline(cin, line);
		setterPhone(line);
	}
	if (n == 4)
	{
		cout << "Area of responsibility: ";
		getline(cin, line);
		setterRegion(line);
	}
}