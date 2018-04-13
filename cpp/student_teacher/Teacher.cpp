#include "Teacher.h"
#include <iostream>
#include <string>

Teacher::Teacher()
{
}

Teacher::~Teacher()
{
}

std::string Teacher::GetFirstName()
{
    return this->firstName;
}

std::string Teacher::GetLastName()
{
    return this->lastName;
}

std::string Teacher::GetAddress()
{
    return this->address;
}

std::string Teacher::GetCity()
{
    return this->city;
}

int Teacher::GetAge()
{
    return this->age;
}

int Teacher::GetPhone()
{
    return this->phone;
}

void Teacher::GradeStudent()
{
    std::cout << "Student graded" << std::endl;
}

void Teacher::SitInClass()
{
    std::cout << "Sitting at front of class" << std::endl;
}
