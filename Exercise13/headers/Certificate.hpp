#ifndef CERTIFICATE_H_INCLUDED
#define CERTIFICATE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Certificate {

private:

	int Id;
	string Name;
	string Rank;
	string Date;

public:

	Certificate();

	void setId();

	int getId();

	void setName();

	string getName();

	void setRank();

	string getRank();

	void setDate();

	string getDate();

};

#endif //CERTIFICATE_H_INCLUDED