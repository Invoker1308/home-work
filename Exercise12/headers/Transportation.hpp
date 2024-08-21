#ifndef TRANSPORTATION_H_INCLUDED
#define TRANSPORTATION_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Transportation {

private:

	int Id;
	string Company;
	int Year;
	int Price;
	string Color;
	int Type;

public:

	Transportation();

	void setId();

	int getId();

	void setCompany();

	string getCompany();

	void setYear();

	int getYear();

	void setPrice();

	int getPrice();

	void setColor();

	string getColor();

	void setType(int x);

	int getType();

	virtual void Display() = 0;

	virtual ~Transportation() {}

};

#endif //TRANSPORTATION_H_INCLUDED