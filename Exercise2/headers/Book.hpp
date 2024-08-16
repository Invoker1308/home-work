
#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include "Document.hpp"

#include <iostream>
#include <string>

using namespace std;

class Book : public Document {

private:

	string Author;
	int Pages;

public:

	Book();

	void Display();

};

#endif //BOOK_H_INCLUDED