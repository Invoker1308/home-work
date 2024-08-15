#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED


#include <string>
#include <iostream>


using namespace std;


class Employee {

private:

    string Name;
    int Age;
    string Sex;
    string Address;
    int Id;

public:

    Employee();

    //set name for employee
    void setName();

    string getName();

    //set age for employee
    void setAge();

    int getAge();

    //set sex for employee
    void setSex();

    string getSex();

    //set address for employee
    void setAddress();

    string getAddress();

    //set id for employee: 1 = worker, 2 = engineer, 3 = staff
    void setId(int x);

    int getId();

    virtual string GetSpecificInfo() = 0;
    virtual ~Employee() {}

};


#endif // EMPLOYEE_H_INCLUDED
