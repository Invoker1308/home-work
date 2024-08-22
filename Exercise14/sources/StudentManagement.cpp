#include "../headers/StudentManagement.hpp"

//sort by name, phone
bool cmp(Student* s1, Student* s2) {
    if (s1->getFullName() != s2->getFullName())
        return s1->getFullName() > s2->getFullName();
    else
        return s1->getPhone() < s2->getPhone();
}

//add student
void StudentManagement::AddStudent(vector<Student*>& v, int p) {
    //check type of student
    // 1 = good, 2 = normal
    try {
        if (p == 1) {
            v.push_back(new GoodStudent);
            v[v.size() - 1]->setStuType(1);
        }
        if (p == 2) {
            v.push_back(new NormalStudent);
            v[v.size() - 1]->setStuType(2);
        }
        sort(v.begin(), v.end(), cmp);
    }
    catch (std::exception& s) {
        cout << s.what() << endl;
    }
}

//display all students
void StudentManagement::ShowInfo(vector<Student*> v) {
    cout << left << setw(20) << "Full name" << setw(20) << "Day of birth" << setw(10) << "Sex" << setw(20) << "Phone" << setw(20) << "University" << setw(12) << "Grade level" << setw(12) << "Type" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        Display(v[i]);
    }
}

//display only one student
void StudentManagement::Display(Student* stuPtr) {
    if (stuPtr->getStuType() == 1)
        cout << left << setw(20) << stuPtr->getFullName() << setw(20) << stuPtr->getDoB() << setw(10) << stuPtr->getSex() << setw(20) << stuPtr->getPhone() << setw(20) << stuPtr->getUniversity() << setw(12) << stuPtr->getGradeLevel() << setw(12) << "Good";
    if (stuPtr->getStuType() == 2)
        cout << left << setw(20) << stuPtr->getFullName() << setw(20) << stuPtr->getDoB() << setw(10) << stuPtr->getSex() << setw(20) << stuPtr->getPhone() << setw(20) << stuPtr->getUniversity() << setw(12) << stuPtr->getGradeLevel() << setw(12) << "Normal";
    stuPtr->ShowMyInfo();
}

//sort by type
bool cmpType(Student* s1, Student* s2) {
    if (s1->getStuType() < s2->getStuType())
        return true;
    else
        return false;
}

//sort by gpa, full name
bool cmpGood(Student* s1, Student* s2) {
    GoodStudent* gs1 = dynamic_cast<GoodStudent*>(s1);
    GoodStudent* gs2 = dynamic_cast<GoodStudent*>(s2);
    if (gs1->getGpa() != gs2->getGpa())
        return gs1->getGpa() > gs2->getGpa();
    else
        return gs1->getFullName() < gs2->getFullName();
}

//sort by entry test score, english score, full name
bool cmpNormal(Student* s1, Student* s2) {
    NormalStudent* ns1 = dynamic_cast<NormalStudent*>(s1);
    NormalStudent* ns2 = dynamic_cast<NormalStudent*>(s2);
    if (ns1->getEntryTestScore() != ns2->getEntryTestScore())
        return ns1->getEntryTestScore() > ns2->getEntryTestScore();
    else
        if (ns1->getEnglishScore() != ns2->getEnglishScore())
            return ns1->getEnglishScore() > ns2->getEnglishScore();
        else
            return ns1->getFullName() < ns2->getFullName();
}

//recruit
void StudentManagement::Recruit(vector<Student*> v, int number) {
    int GoodNumber = 0, NormalNumber = 0, i = 0;
    sort(v.begin(), v.end(), cmpType);
    for (i = 0;i < v.size()-1;i++) {
        if (v[i]->getStuType() == 2)
            break;
    }
    cout << GoodNumber << endl;
    cout << NormalNumber << endl;

    GoodNumber = i;
    NormalNumber = v.size() - GoodNumber;
    if (number <= GoodNumber) {
        sort(v.begin(), v.begin() + GoodNumber, cmpGood);
        cout << left << setw(20) << "Full name" << setw(20) << "Day of birth" << setw(10) << "Sex" << setw(20) << "Phone" << setw(20) << "University" << setw(12) << "Grade level" << setw(12) << "Type" << setw(30) << "Note" << endl;
        for (i = 0;i < number;i++) {
            Display(v[i]);
        }
        return;
    }
    if (number > GoodNumber) {
        cout << left << setw(20) << "Full name" << setw(20) << "Day of birth" << setw(10) << "Sex" << setw(20) << "Phone" << setw(20) << "University" << setw(12) << "Grade level" << setw(12) << "Type" << setw(30) << "Note" << endl;
        for (i = 0;i < GoodNumber-1;i++) {
            Display(v[i]);
        }
        sort(v.begin()+GoodNumber, v.end(), cmpNormal);
        for (i = GoodNumber - 1;i < number;i++) {
            Display(v[i]);
        }
    }
}

