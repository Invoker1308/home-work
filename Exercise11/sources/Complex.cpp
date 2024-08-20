#include "../headers/Complex.hpp"

//constructor
Complex::Complex() {
	Re = 0;
	Im = 0;
}

//enter your complex
void Complex::Enter() {
	cout << "Real: ";
	cin >> Re;
	cout << "Imaginary: ";
	cin >> Im;
}

//overload operator <<
ostream& operator << (ostream& out, const Complex& c)
{
	out << c.Re << " + i" << c.Im;
	return out;
}

//overload operator +
Complex operator + (const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.Re = c1.Re + c2.Re;
	temp.Im = c1.Im + c2.Im;
	return temp;
}

//overload operator *
Complex operator * (const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.Re = c1.Re * c2.Re - c1.Im * c2.Im;
	temp.Im = c1.Re * c2.Im - c1.Im * c2.Re;
	return temp;
}