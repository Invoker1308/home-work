#include "../headers/Student.hpp"
#include "../headers/GoodStudent.hpp"
#include "../headers/NormalStudent.hpp"
#include "../headers/StudentManagement.hpp"

#include <iostream>
#include <vector>
#include <exception>


using namespace std;

int main() {
    //option 1->4: 4 features
    int option, typeStu, number;
    vector<Student*> Data;
    StudentManagement SM;
    //loop until the user exits
    while (1) {
        try {
            //display 4 options
            cout << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "Choose a feature:" << endl;
            cout << "1.Add a new student" << endl;
            cout << "2.Display all students" << endl;
            cout << "3.Recruit candidates" << endl;
            cout << "4.Exit the program" << endl;
            cout << "Your options: ";
            cin >> option;
            while (option < 1 || option > 4) {
                cout << "Please select a feature from 1 to 4." << endl;
                cout << "Your options: ";
                cin >> option;
            }

            //option 1: Add a new student
            if (option == 1) {
                cout << "Choose type of document:" << endl;
                cout << "1.Good student" << endl;
                cout << "2.Normal student" << endl;
                cout << "Your options: ";
                cin >> typeStu;
                while (typeStu < 1 || typeStu > 2) {
                    cout << "Please select from 1 to 2." << endl;
                    cout << "Your options: ";
                    cin >> typeStu;
                }
                SM.AddStudent(Data, typeStu);
            }

            //option 2: Display all students
            if (option == 2) {
                SM.ShowInfo(Data);
            }

            //option 3: Recruit candidates
            if (option == 3) {
                cout << "How many candidates do you want to recruit? ";
                cin >> number;
                while (number < 11 || number > 15) {
                    cout << "Please select from 11 to 15." << endl;
                    cout << "Your options: ";
                    cin >> number;
                }
                SM.Recruit(Data, number);
            }

            //option 4: exit
            if (option == 4) {
                break;
            }
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }
    }
    return 0;
}