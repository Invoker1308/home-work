#include "../headers//Customer.hpp"
#include "../headers//Receipt.hpp"
#include "../headers//ReceiptManagement.hpp"

#include <iostream>

using namespace std;



int main() {
    ReceiptManagement ReMa;
    int option, id;
    while (1) {
        //display 6 features
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new receipt by meter's ID" << endl;
        cout << "2.Delete a receipt by meter's ID" << endl;
        cout << "3.Display all receipts" << endl;
        cout << "4.Calculate the due for customer by meter's ID" << endl;
        cout << "5.Edit information's customer by meter's ID" << endl;
        cout << "6.Exit the program" << endl;
        cout << "Your option: ";
        cin >> option;
        //if users choose option don't have, rechoose
        while (option < 1 || option > 6) {
            cout << "Please select a feature from 1 to 6." << endl;
            cout << "Your option: ";
            cin >> option;
        }

        //option 1: Add a new receipt by meter's ID
        if (option == 1) {
            ReMa.AddById();
        }

        //option 2: Delete a receipt by meter's ID
        if (option == 2) {
            cout << "ID: ";
            cin >> id;
            ReMa.DeleteById(id);
        }

        //option 3: Display all receipts
        if (option == 3) {
            ReMa.Display();
        }

        //option 4: Calculate the due for customer by meter's ID
        if (option == 4) {
            cout << "ID: ";
            cin >> id;
            ReMa.CalculateDue(id);
        }

        //option 5: Edit information's customer by meter's ID
        if (option == 5) {
            cout << "ID: ";
            cin >> id;
            ReMa.EditInfor(id);
        }

        //option 6: exit
        if (option == 6) {
            break;
        }

    }
}