#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "Course.h"

using namespace std;

int main()
{

    Student student1, student2, student3;
    Course intermediateCpp;
    Teacher teacher;

    intermediateCpp.students[0] = student1;
    intermediateCpp.students[1] = student2;
    intermediateCpp.students[2] = student3;
    intermediateCpp.teacher = teacher;

    cout << "";
    teacher.GradeStudent();
    teacher.SitInClass();
}