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

    public:

        void setName(){
            cout << "Name: ";
            cin.get();
            getline(cin,Name);
        }

        string getName(){
            return Name;
        }

        void setAge(){
            cout << "Age: ";
            cin >> Age;
        }

        int getAge(){
            return Age;
        }

        void setSex(){
            cout << "Sex: ";
            cin.get();
            getline(cin,Sex);
        }

        string getSex(){
            return Sex;
        }

        void setAddress(){
            cout << "Address: ";
            cin.get();
            getline(cin,Address);
        }

        string getAddress(){
            return Address;
        }

};

class Worker : public Employee{

    private:

        int Level;

    public:

        void setLevel(){
            cin >> Level;
        }

        int getLevel(){
            return Level;
        }

};

class Engineer : public Employee{
    //
    private:

        string Major;

    public:

        void setMajor(){
            cout << "Major: ";
            cin.get();
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

        void setJob(){
            cout << "Job: ";
            cin.get();
            getline(cin,Job);
        }

        string getJob(){
            return Job;
        }

};

class EmployeeManagemnt{

    public:

        void AddEmployee(vector<Employee*> &v, int p){
            if (p == 1){
                v.push_back(new Worker);
                v[v.size()-1]->setName();
                v[v.size()-1]->setAge();
                v[v.size()-1]->setSex();
                v[v.size()-1]->setAddress();
            }
            if (p == 2){
                v.push_back(new Engineer);
                v[v.size()-1]->setName();
                v[v.size()-1]->setAge();
                v[v.size()-1]->setSex();
                v[v.size()-1]->setAddress();
            }
            if (p == 3){
                v.push_back(new Staff);
                v[v.size()-1]->setName();
                v[v.size()-1]->setAge();
                v[v.size()-1]->setSex();
                v[v.size()-1]->setAddress();
            }
        }

        void SearchEmployee(vector<Employee*> v){
            string s;
            cout << "Enter the name you want to search for: ";
            cin >> s;
            cout << left << setw(20) << "Name" << setw(5) << "Age"  << setw(10) << "Sex" << setw(30) << "Address" << endl;
            for (int i=0;i<v.size();i++){
                if (strstr(v[i]->getName().c_str(),s.c_str()) != nullptr){
                    cout << left << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << endl;
                }
            }
        }

        void DisplayList(vector<Employee*> v){
            cout << left << setw(20) << "Name" << setw(5) << "Age"  << setw(10) << "Sex" << setw(30) << "Address" << endl;
            for (int i=0;i<v.size();i++)
                cout << left << setw(20) << v[i]->getName() << setw(5) << v[i]->getAge()  << setw(10) << v[i]->getSex() << setw(30) << v[i]->getAddress() << endl;
        }

};

vector<Employee*> Data;

int main() {
    int option,position;
    EmployeeManagemnt EM;
    while(1){
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


        if (option == 2){
            EM.SearchEmployee(Data);
        }


        if (option == 3){
            EM.DisplayList(Data);
        }


        if (option == 4){
            break;
        }


    }
    return 0;
}
