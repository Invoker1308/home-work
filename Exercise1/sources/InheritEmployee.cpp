#include "../headers/InheritEmployee.hpp"




//set level for worker
Worker::Worker() {
    cout << "Level: ";
    cin >> Level;
}

string Worker::GetSpecificInfo() {
    return Level;
}


//set major for engineer
Engineer::Engineer() {
    cout << "Major: ";
    getline(cin, Major);
}

string Engineer::GetSpecificInfo() {
    return Major;
}




//set job for staff
Staff::Staff() {
    cout << "Job: ";
    getline(cin, Job);
}

string Staff::GetSpecificInfo() {
    return Job;
}

