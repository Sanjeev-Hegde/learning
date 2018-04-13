#pragma once
#include <string>
class Teacher
{
  private:
    std::string firstName;
    std::string lastName;
    std::string address;
    std::string city;
    int phone;
    int age;

  public:
    Teacher();
    ~Teacher();
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetAddress();
    std::string GetCity();
    void GradeStudent();
    void SitInClass();
    int GetAge();
    int GetPhone();
};
