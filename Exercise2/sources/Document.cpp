
#include "../headers/Document.hpp"

//constructor
Document::Document() {
	setId();
	getId();
	setPublisher();
	getPublisher();
	setNumberReleased();
	getNumberReleased();
}

//set id for document
void Document::setId() {
	cout << "Id: ";
	cin >> Id;
}

//get document's id
int Document::getId() {
	return Id;
}

//set publisher for document
void Document::setPublisher() {
	cout << "Publisher: ";
	cin.get();
	getline(cin,Publisher);
}

//get document's publisher
string Document::getPublisher() {
	return Publisher;
}

//set number released for document
void Document::setNumberReleased() {
	cout << "Number released: ";
	cin >> NumberReleased;
}

//get document's number released
int Document::getNumberReleased() {
	return NumberReleased;
}

//set type for document: 1 = book, 2 = magazine, 3 = newspaper
void Document::setType(int x) {
	Type = x;
}

//get document's type
int Document::getType() {
	return Type;
}




