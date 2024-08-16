#include "../headers/CandidateManagement.hpp"
#include "../headers/Candidate.hpp"
#include "../headers/GroupA.hpp"
#include "../headers/GroupB.hpp"
#include "../headers/GroupC.hpp"


#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>


using namespace std;


int main() {
    //option 1->4: 4 features
    //position 1->3: 1 = group A, 2 = group B, 3 = group C
    int option, position,canId;
    vector<Candidate*> Data;
    CandidateManagement CM;
    //loop until the user exits
    while (1) {
        //display 4 options
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new candidate" << endl;
        cout << "2.Display the list of candidates" << endl;
        cout << "3.Search for candidates by ID" << endl;
        cout << "4.Exit the program" << endl;
        cout << "Your option: ";
        cin >> option;
        while (option < 1 || option > 4) {
            cout << "Please select a feature from 1 to 4." << endl;
            cout << "Your option: ";
            cin >> option;
        }

        //option 1: add a new candidate
        if (option == 1) {
            cout << "Choose candidate's group:" << endl;
            cout << "1.Group A" << endl;
            cout << "2.Group B" << endl;
            cout << "3.Group C" << endl;
            cout << "Your option: ";
            cin >> position;
            while (position < 1 || position > 3) {
                cout << "Please select from 1 to 3." << endl;
                cout << "Your option: ";
                cin >> position;
            }
            CM.AddCandidate(Data, position);
        }

        //option 2: display the list of candidates
        if (option == 2) {
            CM.DisplayList(Data);
        }

        ////option 3: find candidate by id
        if (option == 3) {
            cout << "Enter the candidate ID you want to find:" << endl;
            cin >> canId;
            CM.FindCandidate(Data, canId);
        }

        //option 4: exit
        if (option == 4) {
            break;
        }


    }
    return 0;
}