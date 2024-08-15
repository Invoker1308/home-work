#ifndef INHERIT_EMPLOYEE_H_INCLUDED
#define INHERIT_EMPLOYEE_H_INCLUDED


#include "Employee.hpp"

class Worker : public Employee {

private:

    string Level;

public:

    //set level for worker
    Worker();

    string GetSpecificInfo();

};

class Engineer : public Employee {

private:

    string Major;

public:

    //set major for engineer
    Engineer();

    string GetSpecificInfo();

};

class Staff : public Employee {

private:

    string Job;

public:

    //set job for staff
    Staff();

    string GetSpecificInfo();

};

#endif // INHERIT_EMPLOYEE_H_INCLUDED