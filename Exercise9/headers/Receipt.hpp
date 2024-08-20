#ifndef RECEIPT_H_INCLUDED
#define RECEIPT_H_INCLUDED

#include "Customer.hpp"

#include <iostream>
#include <string>

using namespace std;

class Receipt : public Customer {

private:

	int Previous;
	int Current;
	int Due;

public:

	Receipt();

	void setPrevious();

	int getPrevious();

	void setCurrent();

	int getCurrent();

	void setDue(int due);

	int getDue();

};





#endif //RECEIPT_H_INCLUDED