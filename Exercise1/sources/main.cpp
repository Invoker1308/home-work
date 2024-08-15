#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include "../headers/InheritEmployee.hpp"
#include "../headers/Employee.hpp"
#include "../headers/EmployeeManagement.hpp"

using namespace std;


//class EmployeeManagemnt {
//
//public:
//
//    // add new employee to vector
//    void AddEmployee(vector<Employee*>& v, int p) {
//        //set worker information
//        if (p == 1) {
//            v.push_back(new Worker);
//            v[v.size() - 1]->setId(1);
//        }
//        //set engineer information
//        if (p == 2) {
//            v.push_back(new Engineer);
//            v[v.size() - 1]->setId(2);
//        }
//        //set staff information
//        if (p == 3) {
//            v.push_back(new Staff);
//            v[v.size() - 1]->setId(3);
//        }
//    }
//
//    //search employee in vector
//    void SearchEmployee(vector<Employee*> v) {
//        string s;
//        cout << "Enter the name you want to search for: ";
//        cin >> s;
//        cout << left << setw(8) << "Number" << setw(20) << "Name" << setw(5) << "Age" << setw(10) << "Sex" << setw(30) << "Address" << setw(20) << "Note" << endl;
//        for (int i = 0;i < v.size();i++) {
//            if (strstr(v[i]->getName().c_str(), s.c_str()) != nullptr) {
//                Display(v[i],i);
//            }
//        }
//    }
//
//    //display the list of employee
//    void DisplayList(vector<Employee*> v) {
//        cout << left << setw(8) << "Number" << setw(20) << "Name" << setw(5) << "Age" << setw(10) << "Sex" << setw(30) << "Address" << setw(20) << "Note" << endl;
//        for (int i = 0;i < v.size();i++) {
//            Display(v[i],i);
//        }
//    }
//
//    void Display(Employee* emPtr,int i) {
//        if (emPtr->getId() == 1)
//            cout << left << setw(8) << i + 1 << setw(20) << emPtr->getName() << setw(5) << emPtr->getAge() << setw(10) << emPtr->getSex() << setw(30) << emPtr->getAddress() << setw(7) << "Level: " << emPtr->GetSpecificInfo() << endl;
//        if (emPtr->getId() == 2)
//            cout << left << setw(8) << i + 1 << setw(20) << emPtr->getName() << setw(5) << emPtr->getAge() << setw(10) << emPtr->getSex() << setw(30) << emPtr->getAddress() << setw(7) << "Major: " << emPtr->GetSpecificInfo() << endl;
//        if (emPtr->getId() == 3)
//            cout << left << setw(8) << i + 1 << setw(20) << emPtr->getName() << setw(5) << emPtr->getAge() << setw(10) << emPtr->getSex() << setw(30) << emPtr->getAddress() << setw(5) << "Job: " << emPtr->GetSpecificInfo() << endl;
//    }
//
//};



int main() {
    //option 1->4: 4 features
    //position 1->3: 1 = worker, 2 = engineer, 3 = staff
    int option, position;
    vector<Employee*> Data;
    EmployeeManagemnt EM;
    //loop until the user exits
    while (1) {
        //display 4 options
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new employee" << endl;
        cout << "2.Search for employees by name" << endl;
        cout << "3.Display the list of employees" << endl;
        cout << "4.Exit the program" << endl;
        cout << "Your options: ";
        cin >> option;
        while (option < 1 || option > 4) {
            cout << "Please select a feature from 1 to 4." << endl;
            cout << "Your options: ";
            cin >> option;
        }

        //option 1
        if (option == 1) {
            cout << "Choose a job position:" << endl;
            cout << "1.Worker" << endl;
            cout << "2.Engineer" << endl;
            cout << "3.Staff" << endl;
            cout << "Your options: ";
            cin >> position;
            while (position < 1 || position > 3) {
                cout << "Please select from 1 to 3." << endl;
                cout << "Your options: ";
                cin >> position;
            }
            EM.AddEmployee(Data, position);
        }

        //option 2
        if (option == 2) {
            EM.SearchEmployee(Data);
        }

        //option 3
        if (option == 3) {
            EM.DisplayList(Data);
        }

        //option 4
        if (option == 4) {
            break;
        }


    }
    return 0;
}
