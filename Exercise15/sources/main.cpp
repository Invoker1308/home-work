#include "../headers/Student.hpp"
#include "../headers/InServiceStudent.hpp"
#include "../headers/StudentManagement.hpp"
#include "../headers/FacultyManagement.hpp"

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>


using namespace std;

int main() {
    //option 1->12: 12 features
    int option, typeStu, Id;
    int size = 0,i = 0;
    bool check = 0;
    string semester,fal,train;
    vector<FacultyManagement*> FaManager;
    vector<Student*> Data;
    StudentManagement SM;
    //loop until the user exits
    while (1) {
        try {
            //display 12 options
            cout << "----------------------------------------------------------------------------------------------------" << endl;
            cout << "Choose a feature:" << endl;
            cout << "1.Add a new student" << endl;
            cout << "2.Display all students" << endl;
            cout << "3.Check regular student by ID" << endl;
            cout << "4.Display gpa in semester " << endl;
            cout << "5.Number of regular student in Faculty" << endl;
            cout << "6.Find highest entry score" << endl;
            cout << "7.Find in service student by train location" << endl;
            cout << "8.Find students who have GPA > 8.0 for the most recent semester " << endl;
            cout << "9.Find student who has highest GPA" << endl;
            cout << "10.Sort students in faculty by type and year admission" << endl;
            cout << "11.Statistics" << endl;
            cout << "12.Exit the program" << endl;
            cout << "Your options: ";
            cin >> option;
            while (option < 1 || option > 12) {
                cout << "Please select a feature from 1 to 4." << endl;
                cout << "Your options: ";
                cin >> option;
            }

            //option 1: Add a new student
            if (option == 1) {
                cout << "Choose type of student:" << endl;
                cout << "1.Regular student" << endl;
                cout << "2.In-service student" << endl;
                cout << "Your options: ";
                cin >> typeStu;
                while (typeStu < 1 || typeStu > 2) {
                    cout << "Please select from 1 to 2." << endl;
                    cout << "Your options: ";
                    cin >> typeStu;
                }
                size = Data.size();
                SM.AddStudent(Data, typeStu);
                if (Data.size() > size) {
                    check = 0;
                    if (FaManager.size() == 0) {
                        FaManager.push_back(new FacultyManagement);
                        FaManager[0]->setName(Data[Data.size() - 1]->getFaculty());
                        FaManager[0]->setVecStu(Data[Data.size() - 1]);
                    }
                    else {
                        for (i = 0;i < FaManager.size();i++) {
                            if (FaManager[i]->getName() == Data[Data.size() - 1]->getFaculty()) {
                                check = 1;
                                break;
                            }
                        }
                        if (!check) {
                            FaManager.push_back(new FacultyManagement);
                            FaManager[FaManager.size()-1]->setName(Data[Data.size() - 1]->getFaculty());
                            FaManager[FaManager.size()-1]->setVecStu(Data[Data.size() - 1]);
                        }
                        if (check) {
                            FaManager[i]->setVecStu(Data[size]);
                        }
                    }
                    
                }
            }

            //option 2: Display all students
            if (option == 2) {
                SM.ShowInfo(Data);
            }

            //option 3: Check regular student by ID
            if (option == 3) {
                cout << "ID: ";
                cin >> Id;
                check = SM.CheckRegular(Data, Id);
                if (check)
                    cout << "ID: " << Id << " is a regular student." << endl;
                else
                    cout << "ID isn't a regular student or does not exists." << endl;
            }

            //option 4: Display gpa in semester
            if (option == 4) {
                cout << "Semester: ";
                cin.get();
                getline(cin, semester);
                SM.ShowGpaBySemester(Data, semester);
            }

            //option 5: Number of regular student in Faculty
            if (option == 5) {
                cout << "Faculty: ";
                cin.get();
                getline(cin, fal);
                SM.NumberRegular(FaManager, fal);
            }
            
            //option 6: Find highest entry score
            if (option == 6) {
                SM.HighestEntry(FaManager);
            }

            //option 7: Find in service student by train location
            if (option == 7) {
                cout << "Train location: ";
                cin.get();
                getline(cin, train);
                SM.FindInService(FaManager, train);
            }
            
            //option 8: Find students who have GPA > 8.0 for the most recent semester
            if (option == 8) {
                SM.GoodGpa(FaManager);
            }

            //option 9: Find student who has highest GPA
            if (option == 9) {
                SM.BestGpa(FaManager);
            }

            //option 10: Sort students in faculty by type and year admission
            if (option == 10) {
                SM.SortByType(FaManager);
            }

            //option 11: Statistics
            if (option == 11) {
                SM.Statistics(FaManager);
            }

            //option 12: exit
            if (option == 12) {
                break;
            }
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }
    }
    return 0;
}