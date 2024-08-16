#include "../headers/Document.hpp"
#include "../headers/Book.hpp"
#include "../headers/Magazine.hpp"
#include "../headers/Newspaper.hpp"
#include "../headers/DocumentManagement.hpp"

#include <iostream>
#include <set>



using namespace std;

int main() {
    //option 1->5: 5 features
    //position 1->3: 1 = book, 2 = magazine, 3 = newspaper
    int option, typeDoc;
    bool check = 0;
    vector<Document*> Data;
    DocumentManagement DM;
    //loop until the user exits
    while (1) {
        //display 5 options
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add new document" << endl;
        cout << "2.Delete document by ID" << endl;
        cout << "3.Display information about the document" << endl;
        cout << "4.Search for document by type" << endl;
        cout << "5.Exit the program" << endl;
        cout << "Your options: ";
        cin >> option;
        while (option < 1 || option > 5) {
            cout << "Please select a feature from 1 to 5." << endl;
            cout << "Your options: ";
            cin >> option;
        }

        //option 1: add document
        check = 0;
        if (option == 1) {
            cout << "Choose type of document:" << endl;
            cout << "1.Book" << endl;
            cout << "2.Magazine" << endl;
            cout << "3.Newspaper" << endl;
            cout << "Your options: ";
            cin >> typeDoc;
            while (typeDoc < 1 || typeDoc > 3) {
                cout << "Please select from 1 to 3." << endl;
                cout << "Your options: ";
                cin >> typeDoc;
            }
            //check id already exists?
            while (!check) {
                check = DM.AddDocument(Data, typeDoc);
                if (check)
                    break;
                else
                    cout << "ID already exists, please enter again." << endl;
            }
        }

        //option 2: delete document by id
        if (option == 2) {
            int delId;
            cout << "Enter the document ID you want to delete: ";
            cin >> delId;
            DM.DeleteDocument(Data, delId);
        }

        //option 3: display list of document
        if (option == 3) {
            DM.DisplayList(Data);
        }

        ////option 4: find document by type
        if (option == 4) {
            cout << "Choose type of document:" << endl;
            cout << "1.Book" << endl;
            cout << "2.Magazine" << endl;
            cout << "3.Newspaper" << endl;
            cout << "Your options: ";
            cin >> typeDoc;
            while (typeDoc < 1 || typeDoc > 3) {
                cout << "Please select from 1 to 3." << endl;
                cout << "Your options: ";
                cin >> typeDoc;
            }
            DM.FindDocument(Data, typeDoc);
        }

        //option 5: exit
        if (option == 5) {
            break;
        }


    }
    return 0;
}