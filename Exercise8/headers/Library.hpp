#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "LibCard.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Library {

private:

	vector<LibCard*> VecLibCard;

public:

	void AddById();

	void Display();

	void DeleteById(int id);

};

#endif //LIBRARY_H_INCLUDED