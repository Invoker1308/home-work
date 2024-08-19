#include "../headers//School.hpp"
#include "../headers//Student.hpp"

#include <iostream>

using namespace std;



int main() {
    School school;
    int option;
    while (1) {
        //display 5 features
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new student" << endl;
        cout << "2.Display students who are 20 years old" << endl;
        cout << "3.The number of students who are 23 years old and from Da Nang" << endl;
        cout << "4.Display all students" << endl;
        cout << "5.Exit the program" << endl;
        cout << "Your option: ";
        cin >> option;
        //if users choose option don't have, rechoose
        while (option < 1 || option > 5) {
            cout << "Please select a feature from 1 to 5." << endl;
            cout << "Your option: ";
            cin >> option;
        }

        //option 1: Add a new student
        if (option == 1) {
            school.AddStudent();
        }

        //option 2: Display students who are 20 years old
        if (option == 2) {
            school.DisplayStu20();
        }

        //option 3: The number of students who are 23 years old and from Da Nang
        if (option == 3) {
            school.DisNumStu23DN();
        }

        //option 4: Display all students
        if (option == 4) {
            school.DisplayAll();
        }

        //option 5: exit
        if (option == 5) {
            break;
        }

    }
}