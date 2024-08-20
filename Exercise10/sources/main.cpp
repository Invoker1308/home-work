#include "../headers/Document.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout << "Enter text: ";
	getline(cin, s);
	Document doc(s);
	cout << "Word count of the document: " << doc.WordCount() << endl;
	cout << "Number of 'a' and 'A' characters in the document: " << doc.aCount() << endl;
	cout << "Document after standardization: " << doc.Standardize() << endl;
	return 0;
}