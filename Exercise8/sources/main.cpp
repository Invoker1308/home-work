#include "../headers//LibCard.hpp"
#include "../headers//Student.hpp"
#include "../headers//Library.hpp"

#include <iostream>

using namespace std;



int main() {
    Library library;
    int option, id;
    while (1) {
        //display 4 features
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a card by ID" << endl;
        cout << "2.Delete a card by ID" << endl;
        cout << "3.Display all cards in library" << endl;
        cout << "4.Exit the program" << endl;
        cout << "Your option: ";
        cin >> option;
        //if users choose option don't have, rechoose
        while (option < 1 || option > 4) {
            cout << "Please select a feature from 1 to 4." << endl;
            cout << "Your option: ";
            cin >> option;
        }

        //option 1: Add a card by ID
        if (option == 1) {
            library.AddById();
        }

        //option 2: Delete a card by ID
        if (option == 2) {
            cout << "ID: ";
            cin >> id;
            library.DeleteById(id);
        }

        //option 3: Display all cards in library
        if (option == 3) {
            library.Display();
        }

        //option 4: exit
        if (option == 4) {
            break;
        }

    }
}