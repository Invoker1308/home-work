
#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED



#include <iostream>
#include "Document.hpp"
using namespace std;

class Book {

private:

	string Author;
	int Pages;

public:

	Book();

	void Display();

};

#endif //BOOK_H_INCLUDED