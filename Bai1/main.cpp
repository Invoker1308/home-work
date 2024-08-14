#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Employee{

    private:

        string Name;
        int Age;
        string Sex;
        string Address;
        int Id;

    public:

        //set name for employee
        void setName(){
            cout << "Name: ";
            cin.get();
            getline(cin,Name);
        }

        string getName(){
            return Name;
        }

        //set age for employee
        void setAge(){
            cout << "Age: ";
            cin >> Age;
        }

        int getAge(){
            return Age;
        }

        //set sex for employee
        void setSex(){
            cout << "Sex: ";
            cin.get();
            getline(cin,Sex);
        }

        string getSex(){
            return Sex;
        }

        //set address for employee
        void setAddress(){
            cout << "Address: ";
            getline(cin,Address);
        }

        string getAddress(){
            return Address;
        }

        //set id for employee: 1 = worker, 2 = engineer, 3 = staff
        void setId(int x){
            Id = x;
        }

        int getId(){
            return Id;
        }

        virtual void setLevel(){}
        virtual int getLevel(){}
        virtual void setMajor(){}
        virtual string getMajor(){}
        virtual void setJob(){}
        virtual string getJob(){}

};

class Worker : public Employee{

    private:

        int Level;

    public:

        //set level for worker
        void setLevel(){
            cout << "Level: ";
            cin >> Level;
        }

        int getLevel(){
            return Level;
        }

};

class Engineer : public Employee{

    private:

        string Major;

    public:

        //set major for engineer
        void setMajor(){
            cout << "Major: ";
            getline(cin,Major);
        }

        string getMajor(){
            return Major;
        }

};

class Staff : public Employee{

    private:

        string Job;

    public:

        //set job for staff
        void setJob(){
            cout << "Job: ";
            getline(cin,Job);
        }

        string getJob(){
            return Job;
        }

};

class EmployeeManagemnt{

    public:

        // add new employee to vector
        void AddEmployee(vector<Employee*> &v, int p){
            //set worker information
            if (p == 1){
                v.push_back(new Worker);
                v[v.size()-1]->setId(1);
                v[v.size()-1]->setName();
                v[v.size()-1]->setAge();
                v[v.size()-1]->setSex();
                v[v.size()-1]->setAddress();
                v[v.size()-1]->setLevel();
            }
            //set engineer information
            if (p == 2){
                v.push_back(new Engineer);
                v[v.size()-1]->setId(2);
                v[v.size()-1]->setName();
                v[v.size()-1]->setAge();
                v[v.size()-1]->setSex();
                v[v.size()-1]->setAddress();
                v[v.size()-1]->setMajor();
            }
            //set staff information
            if (p == 3){
                v.push_back(new Staff);
                v[v.size()-1]->setId(3);
                v[v.size()-1]->setName();
                v[v.size()-1]->setAge();
                v[v.size()-1]->setSex();
                v[v.size()-1]->setAddress();
                v[v.size()-1]->setJob();
            }
        }

        //search employee in vector
        void SearchEmployee(vector<Employee*> v){
            string s;
            cout << "Enter the name you want to search for: ";
            cin >> s;
            cout << left << setw(8) << "Number" << setw(20) << "Name" << setw(5) << "Age"  << setw(10) << "Sex" << setw(30) << "Address" << setw(20) << "Note" << endl;
            for (int i=0;i<v.size();i++){
                if (strstr(v[i]->getName().c_str(),s.c_str()) != nullptr){
                    if (v[i]->getId() == 1)
                        cout << left << setw(8) << i+1 << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << setw(7) << "Level: " << v[i]->getLevel() << endl;
                    if (v[i]->getId() == 2)
                        cout << left << setw(8) << i+1 << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << setw(7) << "Major: " << v[i]->getMajor() << endl;
                    if (v[i]->getId() == 3)
                        cout << left << setw(8) << i+1 << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << setw(5) << "Job: " << v[i]->getJob() << endl;
                }
            }
        }

        //display the list of employee
        void DisplayList(vector<Employee*> v){
            cout << left << setw(8) << "Number" << setw(20) << "Name" << setw(5) << "Age"  << setw(10) << "Sex" << setw(30) << "Address" << setw(20) << "Note" << endl;
            for (int i=0;i<v.size();i++){
                if (v[i]->getId() == 1)
                    cout << left << setw(8) << i+1 << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << setw(7) << "Level: " << v[i]->getLevel() << endl;
                if (v[i]->getId() == 2)
                    cout << left << setw(8) << i+1 << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << setw(7) << "Major: " << v[i]->getMajor() << endl;
                if (v[i]->getId() == 3)
                    cout << left << setw(8) << i+1 << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << setw(5) << "Job: " << v[i]->getJob() << endl;
            }

        }

};

vector<Employee*> Data;

int main() {
    //option 1->4: 4 features
    //position 1->3: 1 = worker, 2 = engineer, 3 = staff
    int option,position;
    EmployeeManagemnt EM;
    //loop until the user exits
    while(1){
        //display 4 options
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Choose a feature:" << endl;
        cout << "1.Add a new employee" << endl;
        cout << "2.Search for employees by name" << endl;
        cout << "3.Display the list of employees" << endl;
        cout << "4.Exit the program" << endl;
        cout << "Your options: ";
        cin >> option;
        while (option < 1 || option > 4){
            cout << "Please select a feature from 1 to 4." << endl;
            cout << "Your options: ";
            cin >> option;
        }

        //option 1
        if (option == 1){
            cout << "Choose a job position:" << endl;
            cout << "1.Worker" << endl;
            cout << "2.Engineer" << endl;
            cout << "3.Staff" << endl;
            cout << "Your options: ";
            cin >> position;
            while (position < 1 || position > 3){
                cout << "Please select from 1 to 3." << endl;
                cout << "Your options: ";
                cin >> position;
            }
            EM.AddEmployee(Data,position);
        }

        //option 2
        if (option == 2){
            EM.SearchEmployee(Data);
        }

        //option 3
        if (option == 3){
            EM.DisplayList(Data);
        }

        //option 4
        if (option == 4){
            break;
        }


    }
    return 0;
}
