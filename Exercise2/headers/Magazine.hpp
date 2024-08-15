#ifndef MAGAZINE_H_INCLUDED
#define MAGAZINE_H_INCLUDED

#include <iostream>
#include "Document.hpp"

using namespace std;

class Magazine : public Document {

private:

	int IssueNumber;
	int IssueMonth;

public:

	Magazine();

	void Display();

};

#endif //MAGAZINE_H_INCLUDED
