#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Customer {

private:

	string FullName;
	int HouseNumber;
	int MeterId;

public:

	Customer();

	void setFullName();

	string getFullName();

	void setHouseNumber();

	int getHouseNumber();

	void setMeterId();

	int getMeterId();

	virtual ~Customer() {}

};





#endif //CUSTOMER_H_INCLUDED