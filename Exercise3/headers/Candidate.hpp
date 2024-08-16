#ifndef CANDIDATE_H_INCLUDED
#define CANDIDATE_H_INCLUDED

#include <iostream>
#include <string>


using namespace std;

class Candidate {

private:

	int Id;
	string FullName;
	string Address;
	int PriorityLevel;
	int Group;

public:

	Candidate();

	void setId();

	int getId();

	void setFullName();

	string getFullName();

	void setAddress();

	string getAddress();

	void setPriorityLevel();

	int getPriorityLevel();

	void setGroup(int gr);

	int getGroup();

	virtual void Display() = 0;

	virtual ~Candidate(){}

};


#endif //CANDIDATE_H_INCLUDED