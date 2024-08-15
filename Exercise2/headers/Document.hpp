#ifndef DOCUMENT_H_INCLUDED
#define DOCUMENT_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;

class Document {

private:

	int Id;
	string Publisher;
	int NumberReleased;

public:

	Document();

	void setId();

	int getId();

	void setPublisher();

	string getPublisher();

	void setNumberReleased();

	int getNumberReleased();

	virtual void Display() = 0;

	virtual ~Document();

};

#endif //DOCUMENT_H_INCLUDED