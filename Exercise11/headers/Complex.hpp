#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>

using namespace std;

class Complex {

private:

	int Re;
	int Im;

public:

	Complex();

	void Enter();

	friend ostream& operator << (ostream& out, const Complex& c);

	friend Complex operator + (const Complex& c1, const Complex& c2);

	friend Complex operator * (const Complex& c1, const Complex& c2);

};

#endif //COMPLEX_H_INCLUDED