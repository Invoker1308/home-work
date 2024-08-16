#include "../headers/CandidateManagement.hpp"



// add new candidate to vector
void CandidateManagement::AddCandidate(vector<Candidate*> &v, int p) {
    if (p == 1) {
        v.push_back(new GroupA);
        v[v.size() - 1]->setGroup(1);
    }
    if (p == 2) {
        v.push_back(new GroupB);
        v[v.size() - 1]->setGroup(2);
    }
    if (p == 3) {
        v.push_back(new GroupC);
        v[v.size() - 1]->setGroup(3);
    }
}

//find candidate in vector by id
void CandidateManagement::FindCandidate(vector<Candidate*> v, int canId) {
    cout << left << setw(8) << "Number" << setw(8) << "ID" << setw(20) << "Name" << setw(30) << "Address" << setw(10) << "Group" << setw(20) << "Priority Level" << setw(20) << "Subject 1" << setw(20) << "Subject 2" << setw(20) << "Subject 3" << endl;
    for (int i = 0;i < v.size();i++) {
        if (v[i]->getId() == canId) {
            Display(v[i], i);
            break;
        }
    }
}

//display the list of candidate
void CandidateManagement::DisplayList(vector<Candidate*> v) {
    cout << left << setw(8) << "Number" << setw(8) << "ID" << setw(20) << "Name" << setw(30) << "Address" << setw(10) << "Group" << setw(20) << "Priority Level"  << setw(20) << "Subject 1" << setw(20) << "Subject 2" << setw(20) << "Subject 3" << endl;
    for (int i = 0;i < v.size();i++) {
        Display(v[i], i);
    }
}

//display a candidate
void CandidateManagement::Display(Candidate* canPtr, int i) {
    if (canPtr->getGroup() == 1)
        cout << left << setw(8) << i + 1 << setw(8) << canPtr->getId() << setw(20) << canPtr->getFullName() << setw(30) << canPtr->getAddress() << setw(10) << "A" << setw(20) << canPtr->getPriorityLevel();
    if (canPtr->getGroup() == 2)
        cout << left << setw(8) << i + 1 << setw(8) << canPtr->getId() << setw(20) << canPtr->getFullName() << setw(30) << canPtr->getAddress() << setw(10) << "B" << setw(20) << canPtr->getPriorityLevel();
    if (canPtr->getGroup() == 3)
        cout << left << setw(8) << i + 1 << setw(8) << canPtr->getId() << setw(20) << canPtr->getFullName() << setw(30) << canPtr->getAddress() << setw(10) << "C" << setw(20) << canPtr->getPriorityLevel();
    canPtr->Display();
}