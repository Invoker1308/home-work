#include "../headers/EmployeeManagement.hpp"

//add employee
bool EmployeeManagement::AddEmployee(vector<Employee*>& v, int p) {
    //check type of employee
    // 0 = experience, 1 = fresehr, 2 = intern
    try {
        if (p == 1) {
            v.push_back(new Experience);
            v[v.size() - 1]->setEmployeeType(0);
        }
        if (p == 2) {
            v.push_back(new Fresher);
            v[v.size() - 1]->setEmployeeType(1);
        }
        if (p == 3) {
            v.push_back(new Intern);
            v[v.size() - 1]->setEmployeeType(2);
        }
    }
    catch (std::exception& s) {
        cout << s.what() << endl;
    }

    //set : UniqueId, use set to check id already exits?
    UniqueId.insert(v[v.size() - 1]->getId());
    if (UniqueId.count(v[v.size() - 1]->getId()) > 1) {
        v.pop_back();
        return false;
    }
    return true;
}

//display all employees
void EmployeeManagement::ShowInfo(vector<Employee*> v) {
    cout << left << setw(4) << "ID" << setw(20) << "Full name" << setw(12) << "Birthday" << setw(20) << "Phone" << setw(20) << "Email" << setw(12) << "Position" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        Display(v[i]);
    }
}

//display only one employee
void EmployeeManagement::Display(Employee* emPtr) {
    if (emPtr->getEmployeeType() == 0)
        cout << left << setw(4) << emPtr->getId() << setw(20) << emPtr->getFullName() << setw(12) << emPtr->getBirthDay() << setw(20) << emPtr->getPhone() << setw(20) << emPtr->getEmail() << setw(12) << "Experience";
    if (emPtr->getEmployeeType() == 1)
        cout << left << setw(4) << emPtr->getId() << setw(20) << emPtr->getFullName() << setw(12) << emPtr->getBirthDay() << setw(20) << emPtr->getPhone() << setw(20) << emPtr->getEmail() << setw(12) << "Fresher";
    if (emPtr->getEmployeeType() == 2)
        cout << left << setw(4) << emPtr->getId() << setw(20) << emPtr->getFullName() << setw(12) << emPtr->getBirthDay() << setw(20) << emPtr->getPhone() << setw(20) << emPtr->getEmail() << setw(12) << "Intern";
    emPtr->ShowMe();
}

//delete employee by id
void EmployeeManagement::DeleteEmployee(vector<Employee*>& v, int delId) {

    //check id already exits?
    if (UniqueId.count(delId) == 0) {
        cout << "ID does not exist." << endl;
    }
    else {
        for (int i = 0;i < v.size();i++) {
            if (v[i]->getId() == delId) {
                v.erase(v.begin() + i);         //if exits, erase in vector by iterator
                UniqueId.erase(delId);
                break;
            }
        }
    }
}

//find all interns
void EmployeeManagement::FindIntern(vector<Employee*> v) {
    bool check = 1;
    cout << left << setw(4) << "ID" << setw(20) << "Full name" << setw(12) << "Birthday" << setw(20) << "Phone" << setw(20) << "Email" << setw(12) << "Position" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        if (v[i]->getEmployeeType() == 2) {
            Display(v[i]);
            check = 0;
        }
    }
    if (check)
        cout << "Not found." << endl;
}

//find all experience
void EmployeeManagement::FindExperience(vector<Employee*> v) {
    bool check = 1;
    cout << left << setw(4) << "ID" << setw(20) << "Full name" << setw(12) << "Birthday" << setw(20) << "Phone" << setw(20) << "Email" << setw(12) << "Position" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        if (v[i]->getEmployeeType() == 0) {
            Display(v[i]);
            check = 0;
        }
    }
    if (check)
        cout << "Not found." << endl;
}

//fine all freshers
void EmployeeManagement::FindFresher(vector<Employee*> v) {
    bool check = 1;
    cout << left << setw(4) << "ID" << setw(20) << "Full name" << setw(12) << "Birthday" << setw(20) << "Phone" << setw(20) << "Email" << setw(12) << "Position" << setw(30) << "Note" << endl;
    for (int i = 0;i < v.size();i++) {
        if (v[i]->getEmployeeType() == 1) {
            Display(v[i]);
            check = 0;
        }
    }
    if (check)
        cout << "Not found." << endl;
}

//edit information of employee by id
void EmployeeManagement::EditInfor(vector<Employee*> v, int id) {
    bool check = 0;
    for (int i = 0;i < v.size();i++) {
        if (v[i]->getId() == id) {
            check = 1;
            if (v[i]->getEmployeeType() == 0) {
                EditExperience(dynamic_cast <Experience*>(v[i]));
                break;
            }  
            if (v[i]->getEmployeeType() == 1) {
                EditFresher(dynamic_cast <Fresher*>(v[i]));
                break;
            } 
            if (v[i]->getEmployeeType() == 2) {
                EditIntern(dynamic_cast <Intern*>(v[i]));
                break;
            }
        }
    }
    if (!check)
        cout << "Not found ID." << endl;
}

//edit experience's infor
void EmployeeManagement::EditExperience(Experience* em) {
    int op;
    cout << "Choose a information you want to edit:" << endl;
    cout << "1.ID" << endl;
    cout << "2.Full name" << endl;
    cout << "3.Birthday" << endl;
    cout << "4.Phone" << endl;
    cout << "5.Email" << endl;
    cout << "6.Type" << endl;
    cout << "7.YOE" << endl;
    cout << "8.ProSkill" << endl;
    cout << "Your option: ";
    cin >> op;
    //if users choose option don't have, rechoose   
    while (op < 1 || op > 8) {
        cout << "Please select a feature from 1 to 8." << endl;
        cout << "Your option: ";
        cin >> op;
    }
    if (op == 1)
        em->setId();
    if (op == 2)
        em->setFullName();
    if (op == 3)
        em->setBirthDay();
    if (op == 4)
        em->setPhone();
    if (op == 5)
        em->setEmail();
    if (op == 6)
        em->setEmployeeType();
    if (op == 7)
        em->setExpInYear(); 
    if (op == 8)
        em->setProSkill();
}

//edit fresher's infor
void EmployeeManagement::EditFresher(Fresher* em) {
    int op;
    cout << "Choose a information you want to edit:" << endl;
    cout << "1.ID" << endl;
    cout << "2.Full name" << endl;
    cout << "3.Birthday" << endl;
    cout << "4.Phone" << endl;
    cout << "5.Email" << endl;
    cout << "6.Type" << endl;
    cout << "7.Graduation date" << endl;
    cout << "8.Graduation rank" << endl;
    cout << "9.Education" << endl;
    cout << "Your option: ";
    cin >> op;
    //if users choose option don't have, rechoose   
    while (op < 1 || op > 9) {
        cout << "Please select a feature from 1 to 9." << endl;
        cout << "Your option: ";
        cin >> op;
    }
    if (op == 1)
        em->setId();
    if (op == 2)
        em->setFullName();
    if (op == 3)
        em->setBirthDay();
    if (op == 4)
        em->setPhone();
    if (op == 5)
        em->setEmail();
    if (op == 6)
        em->setEmployeeType();
    if (op == 7)
        em->setGraduationDate();
    if (op == 8)
        em->setGraduationRank();
    if (op == 9)
        em->setEducation();
}

////edit intern's infor
void EmployeeManagement::EditIntern(Intern* em) {
    int op;
    cout << "Choose a information you want to edit:" << endl;
    cout << "1.ID" << endl;
    cout << "2.Full name" << endl;
    cout << "3.Birthday" << endl;
    cout << "4.Phone" << endl;
    cout << "5.Email" << endl;
    cout << "6.Type" << endl;
    cout << "7.Major" << endl;
    cout << "8.Semestor" << endl;
    cout << "9.University" << endl;
    cout << "Your option: ";
    cin >> op;
    //if users choose option don't have, rechoose   
    while (op < 1 || op > 9) {
        cout << "Please select a feature from 1 to 9." << endl;
        cout << "Your option: ";
        cin >> op;
    }
    if (op == 1)
        em->setId();
    if (op == 2)
        em->setFullName();
    if (op == 3)
        em->setBirthDay();
    if (op == 4)
        em->setPhone();
    if (op == 5)
        em->setEmail();
    if (op == 6)
        em->setEmployeeType();
    if (op == 7)
        em->setMajor();
    if (op == 8)
        em->setSemester();
    if (op == 9)
        em->setUniversity();
}