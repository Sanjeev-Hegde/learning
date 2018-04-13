#include "Student.h"
#include <iostream>
#include <string>

Student::Student()
{
}

Student::~Student()
{
}

std::string Student::GetFirstName()
{
    return this->firstName;
}

std::string Student::GetLastName()
{
    return this->lastName;
}

std::string Student::GetAddress()
{
    return this->address;
}

std::string Student::GetCity()
{
    return this->city;
}

int Student::GetAge()
{
    return this->age;
}

int Student::GetPhone()
{
    return this->phone;
}

void Student::SitInClass()
{
    std::cout << "Sitting in main theater" << std::endl;
}
