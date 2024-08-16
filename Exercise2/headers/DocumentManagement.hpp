

#ifndef DOCUMENT_MANAGEMENT_H_INCLUDED
#define DOCUMENT_MANAGEMENT_H_INCLUDED


#include "Document.hpp"
#include "Book.hpp"
#include "Magazine.hpp"
#include "Newspaper.hpp"


#include <vector>
#include <set>
#include <iostream>


class DocumentManagement {

private:

	multiset<int> UniqueId;

public:

	bool AddDocument(vector<Document*> &v, int p);

	void DisplayList(vector<Document*> v);

	void Display(Document* docPtr, int i);

	void DeleteDocument(vector<Document*>& v, int delId);

	void FindDocument(vector<Document*> v, int tpyeDoc);

};











#endif //DOCUMENT_MANAGEMENT_H_INCLUDED