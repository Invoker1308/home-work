#include "../headers/Employee.hpp"


Employee::Employee() {
    setName();
    setAge();
    setSex();
    setAddress();
}

//set name for employee
void Employee::setName() {
    cout << "Name: ";
    cin.get();
    getline(cin, Name);
}

string Employee::getName() {
    return Name;
}

//set age for employee
void Employee::setAge() {
    cout << "Age: ";
    cin >> Age;
}

int Employee::getAge() {
    return Age;
}

//set sex for employee
void Employee::setSex() {
    cout << "Sex: ";
    cin.get();
    getline(cin, Sex);
}

string Employee::getSex() {
    return Sex;
}

//set address for employee
void Employee::setAddress() {
    cout << "Address: ";
    getline(cin, Address);
}

string Employee::getAddress() {
    return Address;
}

//set id for employee: 1 = worker, 2 = engineer, 3 = staff
void Employee::setId(int x) {
    Id = x;
}

int Employee::getId() {
    return Id;
}

//virtual string Employee::GetSpecificInfo() {}
//virtual Employee::~Employee() {}

