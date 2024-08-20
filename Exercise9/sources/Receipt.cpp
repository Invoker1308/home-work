#include "../headers/Receipt.hpp"

//constructor
Receipt::Receipt() {
	setPrevious();
	setCurrent();
	setDue(0);
}

//set previous
void Receipt::setPrevious() {
	cout << "Previous: ";
	cin >> Previous;
}

//get previous
int Receipt::getPrevious() {
	return Previous;
}

//set current
void Receipt::setCurrent() {
	cout << "Current: ";
	cin >> Current;
}

//get current
int Receipt::getCurrent() {
	return Current;
}

//set due
void Receipt::setDue(int due) {
	Due = due;
}

//get due
int Receipt::getDue() {
	return Due;
}

