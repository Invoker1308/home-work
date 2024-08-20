#include "../headers/Complex.hpp"

#include <iostream>

using namespace std;

int main() {
	Complex com1,com2;
	com1.Enter();
	cout << "Com1: " << com1 << endl;
	com2.Enter();
	cout << "Com2: " << com2 << endl;
	cout << "Com1 + Com2: " << com1 + com2 << endl;
	cout << "Com1 * Com2: " << com1 * com2 << endl;
	return 0;
}