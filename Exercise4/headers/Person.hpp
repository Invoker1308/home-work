#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Person {

private:

	string FullName;
	int Age;
	string Job;
	int Id;

public:

	Person();

	void setFullName();
	
	string getFullName();

	void setAge();

	int getAge();

	void setJob();

	string getJob();

	void setId();

	int getId();

	void DisplayPer();

};



#endif //PERSON_H_INCLUDED