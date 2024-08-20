#ifndef DOCUMENT_H_INCLUDED
#define DOCUMENT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Document {

private:

	string Str;

public:

	Document(){}

	Document(string st);

	int WordCount();

	int aCount();

	string Standardize();

};

#endif //DOCUMENT_H_INCLUDED