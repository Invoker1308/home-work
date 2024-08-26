#include "../headers/StudentManagement.hpp"

//add student
void StudentManagement::AddStudent(vector<Student*>& v, int p) {
    //check type of student
    // 1 = regular student, 2 = in service student
    try {
        if (p == 1) {
            v.push_back(new Student);
            v[v.size() - 1]->setStudentType(1);
        }
        if (p == 2) {
            v.push_back(new InServiceStudent);
            v[v.size() - 1]->setStudentType(2);
        }
    }
    catch (std::exception& s) {
        cout << s.what() << endl;
    }
}

//display all students
void StudentManagement::ShowInfo(vector<Student*> v) {
    cout << left << setw(10) << "Faculty" << setw(4) << "ID" << setw(20) << "Full name" << setw(20) << "Day of birth" << setw(16) << "Year admission" << setw(14) << "Entry score" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        Display(v[i]);
    }
}

//display only one student
void StudentManagement::Display(Student* stuPtr) {
    if (stuPtr->getStudentType() == 1)
        cout << left << setw(10) << stuPtr->getFaculty() << setw(4) << stuPtr->getId() << setw(20) << stuPtr->getFullName() << setw(20) << stuPtr->getDoB() << setw(16) << stuPtr->getYearAdmiss() << setw(14) << stuPtr->getEntryScore() << endl;
    if (stuPtr->getStudentType() == 2) {
        cout << left << setw(10) << stuPtr->getFaculty() << setw(4) << stuPtr->getId() << setw(20) << stuPtr->getFullName() << setw(20) << stuPtr->getDoB() << setw(16) << stuPtr->getYearAdmiss() << setw(14) << stuPtr->getEntryScore();
        InServiceStudent* InSerPtr = dynamic_cast<InServiceStudent*>(stuPtr);
        InSerPtr->ShowMyInfo();
    }
}

//Check regular student by ID
bool StudentManagement::CheckRegular(vector<Student*> v, int id) {
    for (int i = 0;i < v.size();i++) {
        if (v[i]->getId() == id && v[i]->getStudentType() == 1) {
            return 1;
        }
    }
    return 0;
}

//Display gpa by semester
void StudentManagement::ShowGpaBySemester(vector<Student*> v, string semester) {
    bool check;
    cout << left << setw(10) << "Faculty" << setw(4) << "ID" << setw(4) << "Gpa" << endl;
    for (int i = 0;i < v.size();i++) {
        check = 0;
        auto v2 = v[i]->getVecRe();
        for (int j = 0;j < v2.size();j++) {
            if (v2[j]->getSemester() == semester) {
                cout << left << setw(10) << v[i]->getFaculty() << setw(4) << v[i]->getId() << setw(4) << v2[j]->getGpa() << endl;
                check = 1;
                break;
            }
        }
        if (!check) {
            cout << left << setw(4) << v[i]->getId() << setw(4) << "-1" << endl;
        }
    }
}

//Number of regular student in Faculty
void StudentManagement::NumberRegular(vector<FacultyManagement*> v, string Fal) {
    int i,j,number = 0;
    bool check = 0;
    for (i = 0;i < v.size();i++) {
        if (v[i]->getName() == Fal) {
            check = 1;
            break;
        }
    }
    if (!check) {
        cout << "Faculty does not exists." << endl;
        return;
    }
    for (j = 0; j < v[i]->getVecStu().size();j++) {
        if (v[i]->getVecStu()[j]->getStudentType() == 1)
            number += 1;
    }
    cout << Fal << " has " << number << " regular students." << endl;
}


//Find highest entry score
void StudentManagement::HighestEntry(vector<FacultyManagement*> v) {
    double max = 0;
    int i,j,id;
    cout << left << setw(10) << "Faculty" << setw(4) << "ID" << setw(12) << "Entry score" << endl;
    for (i = 0;i < v.size();i++) {
        max = 0;
        for (j = 0; j < v[i]->getVecStu().size();j++) {
            if (v[i]->getVecStu()[j]->getEntryScore() > max) {
                max = v[i]->getVecStu()[j]->getEntryScore();
                id = v[i]->getVecStu()[j]->getId();
            }
        }
        cout << left << setw(10) << v[i]->getName() << setw(4) << id << setw(12) << max << endl;
    }
}

//Find in service student by train location
void StudentManagement::FindInService(vector<FacultyManagement*> v,string TrainLocation) {
    int i, j;
    cout << left << setw(10) << "Faculty" << setw(4) << "ID" << endl;
    for (i = 0;i < v.size();i++) {
        for (j = 0; j < v[i]->getVecStu().size();j++) {
            if (v[i]->getVecStu()[j]->getStudentType() == 2) {
                InServiceStudent* InServicePtr = dynamic_cast<InServiceStudent*>(v[i]->getVecStu()[j]);
                if (InServicePtr->getTrainLocation() == TrainLocation)
                    cout << left << setw(10) << v[i]->getVecStu()[j]->getFaculty() << setw(4) << InServicePtr->getTrainLocation() << endl;
            }
        }
    }
}

//Find students who have GPA > 8.0 for the most recent semester
void StudentManagement::GoodGpa(vector<FacultyManagement*> v) {
    int i, j;
    cout << left << setw(10) << "Faculty" << setw(4) << "ID" << endl;
    for (i = 0;i < v.size();i++) {
        for (j = 0; j < v[i]->getVecStu().size();j++) {
            auto VecMark = v[i]->getVecStu()[j]->getVecRe();
            if (VecMark[VecMark.size()-1]->getGpa() >= 8.0) {
                cout << left << setw(10) << v[i]->getName() << setw(4) << v[i]->getVecStu()[j]->getId() << endl;
            }
        }
    }
}

//Find student who has highest GPA
void StudentManagement::BestGpa(vector<FacultyManagement*> v) {
    int i, j, k, id;
    double max = 0;
    cout << left << setw(10) << "Faculty" << setw(4) << "ID" << setw(10) << "Best Gpa" << endl;
    for (i = 0;i < v.size();i++) {
        max = 0;
        for (j = 0; j < v[i]->getVecStu().size();j++) {
            auto VecMark = v[i]->getVecStu()[j]->getVecRe();
            for (k = 0; k < VecMark.size();k++) {
                if (VecMark[k]->getGpa() > max) {
                    max = VecMark[k]->getGpa();
                    id = v[i]->getVecStu()[j]->getId();
                }
            }
        }
        cout << left << setw(10) << v[i]->getName() << setw(4) << id << setw(10) << max << endl;
    }
}

//compare by type and year admisssion
bool cmp(Student* s1, Student* s2) {
    if (s1->getStudentType() != s2->getStudentType())
        return s1->getStudentType() < s2->getStudentType();
    else
        return s1->getYearAdmiss() > s2->getYearAdmiss();
}

//Sort students in faculty by type and year admission
void StudentManagement::SortByType(vector<FacultyManagement*>& v) {
    int i, j;
    for (i = 0;i < v.size();i++) {
        vector<Student*> VecStu = v[i]->getVecStu();
        sort(VecStu.begin(), VecStu.end(), cmp);
    }
    cout << left << setw(10) << "Faculty" << setw(4) << "ID" << endl;
    for (i = 0;i < v.size();i++) {
        auto VecStu = v[i]->getVecStu();
        for (j = 0; j < v[i]->getVecStu().size();j++)
            cout << left << setw(10) << v[i]->getName() << setw(4) << v[i]->getVecStu()[j]->getId() << endl;
    }
}

//compare by year admission
bool cmp2(Student* s1, Student* s2) {
    return (s1->getYearAdmiss() < s2->getYearAdmiss());
}

//Statistics
void StudentManagement::Statistics(vector<FacultyManagement*>& v) {
    int i, j, index = 0;
    for (i = 0;i < v.size();i++) {
        index = 0;
        cout << "Faculty: " << v[i]->getName() << endl;
        vector<Student*> VecStu = v[i]->getVecStu();
        sort(VecStu.begin(), VecStu.end(), cmp2);
        for (j = 1; j < VecStu.size();j++) {
            if (VecStu[j]->getYearAdmiss() != VecStu[j - 1]->getYearAdmiss()) {
                cout << VecStu[j - 1]->getYearAdmiss() << ": " << j - index << endl;
                index = j;
            }
        }
        j -= 1;
        index -= 1;
        if (index != j)
            cout << VecStu[j]->getYearAdmiss() << ": " << j - index << endl;
    }
}
