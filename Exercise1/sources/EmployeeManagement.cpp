#include "../headers/EmployeeManagement.hpp"



// add new employee to vector
void EmployeeManagemnt::AddEmployee(vector<Employee*>& v, int p) {
    //set worker information
    if (p == 1) {
        v.push_back(new Worker);
        v[v.size() - 1]->setId(1);
    }
    //set engineer information
    if (p == 2) {
        v.push_back(new Engineer);
        v[v.size() - 1]->setId(2);
    }
    //set staff information
    if (p == 3) {
        v.push_back(new Staff);
        v[v.size() - 1]->setId(3);
    }
}

//search employee in vector
void EmployeeManagemnt::SearchEmployee(vector<Employee*> v) {
    string s;
    cout << "Enter the name you want to search for: ";
    cin >> s;
    cout << left << setw(8) << "Number" << setw(20) << "Name" << setw(5) << "Age" << setw(10) << "Sex" << setw(30) << "Address" << setw(20) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        if (strstr(v[i]->getName().c_str(), s.c_str()) != nullptr) {
            Display(v[i], i);
        }
    }
}

//display the list of employee
void EmployeeManagemnt::DisplayList(vector<Employee*> v) {
    cout << left << setw(8) << "Number" << setw(20) << "Name" << setw(5) << "Age" << setw(10) << "Sex" << setw(30) << "Address" << setw(20) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        Display(v[i], i);
    }
}

void EmployeeManagemnt::Display(Employee* emPtr, int i) {
    if (emPtr->getId() == 1)
        cout << left << setw(8) << i + 1 << setw(20) << emPtr->getName() << setw(5) << emPtr->getAge() << setw(10) << emPtr->getSex() << setw(30) << emPtr->getAddress() << setw(7) << "Level: " << emPtr->GetSpecificInfo() << endl;
    if (emPtr->getId() == 2)
        cout << left << setw(8) << i + 1 << setw(20) << emPtr->getName() << setw(5) << emPtr->getAge() << setw(10) << emPtr->getSex() << setw(30) << emPtr->getAddress() << setw(7) << "Major: " << emPtr->GetSpecificInfo() << endl;
    if (emPtr->getId() == 3)
        cout << left << setw(8) << i + 1 << setw(20) << emPtr->getName() << setw(5) << emPtr->getAge() << setw(10) << emPtr->getSex() << setw(30) << emPtr->getAddress() << setw(5) << "Job: " << emPtr->GetSpecificInfo() << endl;
}

