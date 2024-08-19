#include "../headers//Hotel.hpp"
#include "../headers//Person.hpp"
#include "../headers//Room.hpp"

#include <iostream>

using namespace std;



int main() {
    Hotel hotel;
    int option,id;
	while (1) {
        //display 5 features
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new guest by ID" << endl;
        cout << "2.Delete a guest by ID" << endl;
        cout << "3.Display information of rooms" << endl;
        cout << "4.Calculate the room fee" << endl;
        cout << "5.Exit the program" << endl;
        cout << "Your option: ";
        cin >> option;
        //if users choose option don't have, rechoose
        while (option < 1 || option > 5) {
            cout << "Please select a feature from 1 to 5." << endl;
            cout << "Your option: ";
            cin >> option;
        }

        //option 1: add room by id
        if (option == 1) {
            hotel.AddById();
        }

        //option 2: delete by id
        if (option == 2) {
            cout << "ID: ";
            cin >> id;
            hotel.DeleteById(id);
        }

        //option 3: display all rooms in hotel
        if (option == 3) {
            hotel.Display();
        }

        //option 3: calculate room fee
        if (option == 4) {
            cout << "ID: ";
            cin >> id;
            hotel.RoomFee(id);
        }

        //option 5: exit
        if (option == 5) {
            break;
        }

	}
}