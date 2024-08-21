#include "../headers/TransportationManagement.hpp"

//add transportation
bool TransportationManagement::AddTran(vector<Transportation*>& v, int p) {
    //check type of transportation
    // 1 = car, 2 = motorbike, 3 = truck
    if (p == 1) {
        v.push_back(new Car);
        v[v.size() - 1]->setType(1);
    }
    if (p == 2) {
        v.push_back(new Motorbike);
        v[v.size() - 1]->setType(2);
    }
    if (p == 3) {
        v.push_back(new Truck);
        v[v.size() - 1]->setType(3);
    }

    //set : UniqueId, use set to check id already exits?
    UniqueId.insert(v[v.size() - 1]->getId());
    if (UniqueId.count(v[v.size() - 1]->getId()) > 1) {
        v.pop_back();
        return false;
    }
    return true;
}

//display the list of transportations
void TransportationManagement::DisplayList(vector<Transportation*> v) {
    cout << left << setw(8) << "Number" << setw(4) << "ID" << setw(20) << "Company" << setw(10) << "Year" << setw(10) << "Price" << setw(10) << "Color" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        Display(v[i], i);
    }
}

//display only one transportation
void TransportationManagement::Display(Transportation* tranPtr, int i) {
    if (tranPtr->getType() == 1)
        cout << left << setw(8) << i + 1 << setw(4) << tranPtr->getId() << setw(20) << tranPtr->getCompany() << setw(10) << tranPtr->getYear() << setw(10) << tranPtr->getPrice() << setw(10) << tranPtr->getColor();
    if (tranPtr->getType() == 2)
        cout << left << setw(8) << i + 1 << setw(4) << tranPtr->getId() << setw(20) << tranPtr->getCompany() << setw(10) << tranPtr->getYear() << setw(10) << tranPtr->getPrice() << setw(10) << tranPtr->getColor();
    if (tranPtr->getType() == 3)
        cout << left << setw(8) << i + 1 << setw(4) << tranPtr->getId() << setw(20) << tranPtr->getCompany() << setw(10) << tranPtr->getYear() << setw(10) << tranPtr->getPrice() << setw(10) << tranPtr->getColor();
    tranPtr->Display();
}

//delete transportation by id
void TransportationManagement::DeleteTran(vector<Transportation*>& v, int delId) {

    //check id already exits?
    if (UniqueId.count(delId) == 0) {
        cout << "ID does not exist." << endl;
    }
    else {
        for (int i = 0;i < v.size();i++) {
            if (v[i]->getId() == delId) {
                v.erase(v.begin() + i);         //if exits, erase in vector by iterator
                break;
            }
        }
    }
}

//Search for transportation by company
void TransportationManagement::SearchByCompany(vector<Transportation*> v) {
    string s;
    bool check = 1;
    cout << "Enter the company's name you want to search for: ";
    cin >> s;
    cout << left << setw(8) << "Number" << setw(4) << "ID" << setw(20) << "Company" << setw(10) << "Year" << setw(10) << "Price" << setw(10) << "Color" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        if (strstr(v[i]->getCompany().c_str(), s.c_str()) != nullptr) {
            Display(v[i], i);
            check = 0;
        }
    }
    if (check)
        cout << "Not found." << endl;
}

//Search for transportation by color
void TransportationManagement::SearchByColor(vector<Transportation*> v) {
    string s;
    bool check = 1;
    cout << "Enter the color you want to search for: ";
    cin >> s;
    cout << left << setw(8) << "Number" << setw(4) << "ID" << setw(20) << "Company" << setw(10) << "Year" << setw(10) << "Price" << setw(10) << "Color" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        if (strstr(v[i]->getColor().c_str(), s.c_str()) != nullptr) {
            Display(v[i], i);
            check = 0;
        }
    }
    if (check)
        cout << "Not found." << endl;
}