#ifndef RECEIPT_MANAGEMENT_H_INCLUDED
#define RECEIPT_MANAGEMENT_H_INCLUDED

#include "Receipt.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class ReceiptManagement {

private:

	vector<Receipt*> VecRe;

public:

	void AddById();

	void Display();

	void DeleteById(int id);

	void CalculateDue(int id);

	void EditInfor(int id);

};

#endif //RECEIPT_MANAGEMENT_H_INCLUDED