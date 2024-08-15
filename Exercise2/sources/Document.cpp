
#include "../headers/Document.hpp"

Document::Document() {
	setId();
	getId();
	setPublisher();
	getPublisher();
	setNumberReleased();
	getNumberReleased();
}

void Document::setId() {
	cout << "Id: ";
	cin >> Id;
}

int Document::getId() {
	return Id;
}

void Document::setPublisher() {
	cout << "Publisher: ";
	getchar();
	cin >> Publisher;
}

string Document::getPublisher() {
	return Publisher;
}

void Document::setNumberReleased() {
	cout << "Number released: ";
	cin >> NumberReleased;
}

int Document::getNumberReleased() {
	return NumberReleased;
}




