#ifndef CANDIDATE_MANAGEMENT_H_INCLUDED
#define CANDIDATE_MANAGEMENT_H_INCLUDED

#include "Candidate.hpp"
#include "GroupA.hpp"
#include "GroupB.hpp"
#include "GroupC.hpp"


#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;


class CandidateManagement {

public:

    // add new employee to vector
    void AddCandidate(vector<Candidate*> &v, int p);

    //search employee in vector
    void FindCandidate(vector<Candidate*> v, int canId);

    //display the list of employee
    void DisplayList(vector<Candidate*> v);

    //display an employee
    void Display(Candidate* canPtr, int i);

};


#endif // CANDIDATE_MANAGEMENT_H_INCLUDED