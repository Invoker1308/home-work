#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Person {

private:

	string FullName;
	int Age;
	string Hometown;
	int Id;

public:

	Person();

	void setFullName();

	string getFullName();

	void setAge();

	int getAge();

	void setHometown();

	string getHometown();

	void setId();

	int getId();

	virtual ~Person() {}

};





#endif //PERSON_H_INCLUDED