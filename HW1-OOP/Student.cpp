#include "Student.h"

Student::Student()
{
    strcpy_s(fullName, 100, "No Name");
    averageMark = 0.0;
    strcpy_s(schoolName, 100, "No School");
    groupNumber = 0;
    cout << "Student() " << fullName << endl;
}

Student::Student(const char* fullName, float averageMark, const char* schoolName, int groupNumber)
{
    strcpy_s(this->fullName, 100, fullName);
    this->averageMark = averageMark;
    strcpy_s(this->schoolName, 100, schoolName);
    this->groupNumber = groupNumber;
    cout << "Student(name, mark, school, group): " << fullName << endl;
}

Student::~Student()
{
    cout << "~Student() " << fullName << endl;
}

void Student::showInfo()
{
    cout << "Full Name: " << fullName << endl;
    cout << "Average Mark : " << averageMark << endl;
    cout << "School : " << schoolName << endl;
    cout << "Group : " << groupNumber << endl << endl;
}

void Student::setFullName(const char* fullName)
{
    strcpy_s(this->fullName, 100, fullName);
}

const char* Student::getFullName()
{
    return fullName;
}

void Student::setAverageMark(float mark)
{
    if (mark < 0 || mark > 12)
        cout << "Error: invalid mark!\n";
    else
        averageMark = mark;
}

float Student::getAverageMark()
{
    return averageMark;
}

void Student::setSchoolName(const char* schoolName)
{
    strcpy_s(this->schoolName, 100, schoolName);
}

const char* Student::getSchoolName()
{
    return schoolName;
}

void Student::setGroupNumber(int groupNumber)
{
    this->groupNumber = groupNumber;
}

int Student::getGroupNumber()
{
    return groupNumber;
}
