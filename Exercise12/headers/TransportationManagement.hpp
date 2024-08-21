#ifndef TRANSPORTATION_MANAGEMENT_H_INCLUDED
#define TRANSPORTATION_MANAGEMENT_H_INCLUDED


#include "Transportation.hpp"
#include "Car.hpp"
#include "Motorbike.hpp"
#include "Truck.hpp"


#include <vector>
#include <set>
#include <iostream>


class TransportationManagement {

private:

	multiset<int> UniqueId;

public:

	bool AddTran(vector<Transportation*>& v, int p);

	void DisplayList(vector<Transportation*> v);

	void Display(Transportation* tranPtr, int i);

	void DeleteTran(vector<Transportation*>& v, int delId);

	void SearchByCompany(vector<Transportation*> v);

	void SearchByColor(vector<Transportation*> v);

};











#endif //TRANSPORTATION_MANAGEMENT_H_INCLUDED