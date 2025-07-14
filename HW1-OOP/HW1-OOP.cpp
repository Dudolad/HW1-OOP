#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student NN;
    NN.showInfo();

    Student Yaroslav("Dudolad Yaroslav Serhiyovich", 11.5, "Starosaltivskiy lyceum", 1);
    Yaroslav.showInfo();

    NN.setFullName("Petrov Ivan");
    NN.setAverageMark(10.6);
    NN.setSchoolName("Kherkiv School #1");
    NN.setGroupNumber(26);
    NN.showInfo();

    cout << "Student NN's average mark: " << NN.getAverageMark() << endl;

    return 0;
}
