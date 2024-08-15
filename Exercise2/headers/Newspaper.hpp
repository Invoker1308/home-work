#ifndef NEWSPAPER_H_INCLUDED
#define NEWSPAPER_H_INCLUDED

#include <iostream>
#include "Document.hpp"

using namespace std;

class Newspaper : public Document {

private:

	int IssueDate;

public:

	Newspaper();

	void Display();

};

#endif //NEWSPAPER_H_INCLUDED
