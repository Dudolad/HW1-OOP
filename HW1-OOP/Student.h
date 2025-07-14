#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	char* fullName;
	float averageMark;
	char* schoolName;
	int groupNumber;
public:
	Student();
	Student(const char* fullName, float averageMark, const char* schoolName, int groupNumber);
	~Student();
	void showInfo();

	void setFullName(const char* fullName);
	const char* getFullName();

	void setAverageMark(float mark);
	float getAverageMark();

	void setSchoolName(const char* schoolName);
	const char* getSchoolName();

	void setGroupNumber(int groupNumber);
	int getGroupNumber();
};

