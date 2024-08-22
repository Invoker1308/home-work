#include "../headers/Employee.hpp"
#include "../headers/Experience.hpp"
#include "../headers/Fresher.hpp"
#include "../headers/Intern.hpp"
#include "../headers/EmployeeManagement.hpp"

#include <iostream>
#include <vector>


using namespace std;

int main() {
    //option 1->8: 8 features
    //position 0->2: 0 = experience, 1 = fresher, 2 = intern
    int option, typeEm, id;
    bool check = 0;
    vector<Employee*> Data;
    EmployeeManagement EM;
    //loop until the user exits
    while (1) {
        //display 8 options
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new employee" << endl;
        cout << "2.Delete employee by ID" << endl;
        cout << "3.Edit employee's information by ID" << endl;
        cout << "4.Display all employees" << endl;
        cout << "5.Show all experiences" << endl;
        cout << "6.Show all freshers" << endl;
        cout << "7.Show all interns" << endl;
        cout << "8.Exit the program" << endl;
        cout << "Your options: ";
        cin >> option;
        while (option < 1 || option > 8) {
            cout << "Please select a feature from 1 to 8." << endl;
            cout << "Your options: ";
            cin >> option;
        }

        //option 1: Add a new employee
        check = 0;
        if (option == 1) {
            cout << "Choose type of document:" << endl;
            cout << "1.Experience" << endl;
            cout << "2.Fresher" << endl;
            cout << "3.Intern" << endl;
            cout << "Your options: ";
            cin >> typeEm;
            while (typeEm < 1 || typeEm > 3) {
                cout << "Please select from 1 to 3." << endl;
                cout << "Your options: ";
                cin >> typeEm;
            }
            //check id already exists?
            while (!check) {
                check = EM.AddEmployee(Data, typeEm);
                if (check)
                    break;
                else
                    cout << "ID already exists, please enter again." << endl;
            }
        }

        //option 2: Delete employee by ID
        if (option == 2) {
            int delId;
            cout << "Enter the document ID you want to delete: ";
            cin >> delId;
            EM.DeleteEmployee(Data, delId);
        }

        //option 3: Edit employee's information by ID
        if (option == 3) {
            cout << "ID: ";
            cin >> id;
            EM.EditInfor(Data, id);
        }

        //option 4: Display all employees
        if (option == 4) {
            EM.ShowInfo(Data);
        }

        //option 5: Show all experiences
        if (option == 5) {
            EM.FindExperience(Data);
        }

        //option 6: Show all freshers
        if (option == 6) {
            EM.FindFresher(Data);
        }

        //option 7: Show all interns
        if (option == 7) {
            EM.FindIntern(Data);
        }

        //option 8: exit
        if (option == 8) {
            break;
        }


    }
    return 0;
}