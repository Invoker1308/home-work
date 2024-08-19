#include "../headers//Faculty.hpp"
#include "../headers//Person.hpp"
#include "../headers//Teacher.hpp"

#include <iostream>

using namespace std;



int main() {
    Faculty faculty;
    int option, id;
    while (1) {
        //display 5 features
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new teacher by ID" << endl;
        cout << "2.Delete a teacher by ID" << endl;
        cout << "3.Display all teachers in faculty" << endl;
        cout << "4.Calculate the net salary for teacher by ID" << endl;
        cout << "5.Exit the program" << endl;
        cout << "Your option: ";
        cin >> option;
        //if users choose option don't have, rechoose
        while (option < 1 || option > 5) {
            cout << "Please select a feature from 1 to 5." << endl;
            cout << "Your option: ";
            cin >> option;
        }

        //option 1: Add a new teacher by ID
        if (option == 1) {
            faculty.AddById();
        }

        //option 2: Delete a teacher by ID
        if (option == 2) {
            cout << "ID: ";
            cin >> id;
            faculty.DeleteById(id);
        }

        //option 3: Display all teachers in faculty
        if (option == 3) {
            faculty.Display();
        }

        //option 4: Calculate the net salary for teacher by ID
        if (option == 4) {
            cout << "ID: ";
            cin >> id;
            faculty.CalNetSalary(id);
        }

        //option 5: exit
        if (option == 5) {
            break;
        }

    }
}