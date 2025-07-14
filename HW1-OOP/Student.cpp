#include "Student.h"

Student::Student()
{
    fullName = new char[30] {"No Name"};
    averageMark = 0.0;
    schoolName = new char[30] {"No School"};
    groupNumber = 0;
    cout << "Student() " << fullName << endl;
}

Student::Student(const char* full_Name, float averageMark, const char* school_Name, int groupNumber)
{
    int size = strlen(full_Name) + 1;
    fullName = new char[size];
    strcpy_s(fullName, size, full_Name);

    this->averageMark = averageMark;

    size = strlen(school_Name) + 1;
    schoolName = new char[size];
    strcpy_s(schoolName, size, school_Name);

    this->groupNumber = groupNumber;

    cout << "Student(name, mark, school, group): " << fullName << endl;
}

Student::~Student()
{
    cout << "~Student() " << fullName << endl;
    delete[] fullName;
    delete[] schoolName;
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
    delete[] this->fullName; 
    int size = strlen(fullName) + 1;
    this->fullName = new char[size];
    strcpy_s(this->fullName, size, fullName);
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
    delete[] this->schoolName; 
    int size = strlen(schoolName) + 1;
    this->schoolName = new char[size];
    strcpy_s(this->schoolName, size, schoolName);
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
