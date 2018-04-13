#pragma once
#include <string>
class Student
{
  private:
    std::string firstName;
    std::string lastName;
    std::string address;
    std::string city;
    int phone;
    int age;

  public:
    Student();
    ~Student();
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetAddress();
    std::string GetCity();
    int GetAge();
    int GetPhone();
    void SitInClass();
};
