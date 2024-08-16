
#include "../headers/DocumentManagement.hpp"

//add document
bool DocumentManagement::AddDocument(vector<Document*> &v, int p) {
    //check type of document
    // 1 = book, 2 = magazine, 3 = newspaper
    if (p == 1) {
        v.push_back(new Book);
        v[v.size() - 1]->setType(1);
    }
    if (p == 2) {
        v.push_back(new Magazine);
        v[v.size() - 1]->setType(2);
    }
    if (p == 3) {
        v.push_back(new Newspaper);
        v[v.size() - 1]->setType(3);
    }
    
    //set : UniqueId, use set to check id already exits?
    UniqueId.insert(v[v.size() - 1]->getId());
    if (UniqueId.count(v[v.size() - 1]->getId()) > 1) {
        v.pop_back();
        return false;
    }
    return true;
}

//display the list of document
void DocumentManagement::DisplayList(vector<Document*> v) {
    cout << left << setw(8) << "Number" << setw(4) << "ID" << setw(20) << "Publisher" << setw(20) << "Number Released" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        Display(v[i], i);
    }
}

//display only one document
void DocumentManagement::Display(Document* docPtr, int i) {
    if (docPtr->getType() == 1) 
        cout << left << setw(8) << i + 1 << setw(4) << docPtr->getId() << setw(20) << docPtr->getPublisher() << setw(20) << docPtr->getNumberReleased();
    if (docPtr->getType() == 2)
        cout << left << setw(8) << i + 1 << setw(4) << docPtr->getId() << setw(20) << docPtr->getPublisher() << setw(20) << docPtr->getNumberReleased();
    if (docPtr->getType() == 3)
        cout << left << setw(8) << i + 1 << setw(4) << docPtr->getId() << setw(20) << docPtr->getPublisher() << setw(20) << docPtr->getNumberReleased();
    docPtr->Display();

}

//delete document by id
void DocumentManagement::DeleteDocument(vector<Document*>& v, int delId) {

    //check id already exits?
    if (UniqueId.count(delId) == 0) {
        cout << "ID does not exist." << endl;
    }
    else {
        for (int i = 0;i < v.size();i++) {
            if (v[i]->getId() == delId) {
                v.erase(v.begin() + i);         //if exits, erase in vector by iterator
                break;
            }
        }
    }
}

//find document by id
void DocumentManagement::FindDocument(vector<Document*> v, int tpyeDoc) {
    int j = -1;
    cout << left << setw(8) << "Number" << setw(4) << "ID" << setw(20) << "Publisher" << setw(20) << "Number Released" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        if (v[i]->getType() == tpyeDoc) {
            j++;
            Display(v[i], j);
        }
    }
}