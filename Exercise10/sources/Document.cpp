#include "../headers/Document.hpp"

//constructor
Document::Document(string st) {
	Str = st;
}

//word count
int Document::WordCount() {
    int i = 0,count = 0;
    Str += ' ';
    while (i < Str.size()) {
        if ((Str[i] != ' ') && (Str[i + 1] == ' '))
            count += 1;
        i++;
    }
    return count;
}

//count a and A character in document
int Document::aCount() {
    int i = 0, count = 0;
    while (i < Str.size()) {
        if ((Str[i] == 'a') || (Str[i + 1] == 'A'))
            count += 1;
        i++;
    }
    return count;
}

//standardlize document
string Document::Standardize() {
    int i = 0;
    i = Str.size() - 1;
    //Remove the character ' ' at the end of the text
    while (Str[i] == ' ') {
        Str.erase(Str.size() - 1, 1);
        i--;
    }
    i = 0;
    //Remove the character ' ' at the beginning of the text
    while (Str[i] == ' ')
        Str.erase(0, 1);
    //Remove the character ' ' in the middle of the text
    while (i < Str.size()) {
        if ((Str[i] == ' ') && (Str[i + 1] == ' '))
            Str.erase(i, 1);
        else
            i++;
    }
    return Str;
}