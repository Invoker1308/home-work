#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include "../headers/InheritEmployee.hpp"
#include "../headers/Employee.hpp"
#include "../headers/EmployeeManagement.hpp"

using namespace std;


int main() {
    //option 1->4: 4 features
    //position 1->3: 1 = worker, 2 = engineer, 3 = staff
    int option, position;
    vector<Employee*> Data;
    EmployeeManagement EM;
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
