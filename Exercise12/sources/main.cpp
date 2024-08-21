#include "../headers/Transportation.hpp"
#include "../headers/Car.hpp"
#include "../headers/Motorbike.hpp"
#include "../headers/Truck.hpp"
#include "../headers/TransportationManagement.hpp"

#include <iostream>
#include <vector>


using namespace std;

int main() {
    //option 1->6: 6 features
    //position 1->3: 1 = car, 2 = motorbike, 3 = truck
    int option, typeTran;
    bool check = 0;
    vector<Transportation*> Data;
    TransportationManagement TM;
    //loop until the user exits
    while (1) {
        //display 6 options
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new transportation" << endl;
        cout << "2.Delete transportation by ID" << endl;
        cout << "3.Display all transportations" << endl;
        cout << "4.Search for transportation by company" << endl;
        cout << "5.Search for transportation by color" << endl;
        cout << "6.Exit the program" << endl;
        cout << "Your options: ";
        cin >> option;
        while (option < 1 || option > 6) {
            cout << "Please select a feature from 1 to 6." << endl;
            cout << "Your options: ";
            cin >> option;
        }

        //option 1: Add a new transportation
        check = 0;
        if (option == 1) {
            cout << "Choose type of document:" << endl;
            cout << "1.Car" << endl;
            cout << "2.Motorbike" << endl;
            cout << "3.Truck" << endl;
            cout << "Your options: ";
            cin >> typeTran;
            while (typeTran < 1 || typeTran > 3) {
                cout << "Please select from 1 to 3." << endl;
                cout << "Your options: ";
                cin >> typeTran;
            }
            //check id already exists?
            while (!check) {
                check = TM.AddTran(Data, typeTran);
                if (check)
                    break;
                else
                    cout << "ID already exists, please enter again." << endl;
            }
        }

        //option 2: Delete transportation by ID
        if (option == 2) {
            int delId;
            cout << "Enter the document ID you want to delete: ";
            cin >> delId;
            TM.DeleteTran(Data, delId);
        }

        //option 3: Display all transportations
        if (option == 3) {
            TM.DisplayList(Data);
        }

        ////option 4: Search for transportation by company
        if (option == 4) {
            TM.SearchByCompany(Data);
        }

        ////option 5: Search for transportation by color
        if (option == 5) {
            TM.SearchByColor(Data);
        }

        //option 6: exit
        if (option == 6) {
            break;
        }


    }
    return 0;
}