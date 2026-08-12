#include <iostream>
#include <string>
using namespace std;

class Teacher
{

public:
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(Teacher &orgobj)
    {
        cout << "i am custom copy constructor" << endl;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
    }

    string name;
    string dept;
    string subject;
    double salary;
    // propertise
    // object
    void changedept(string newdept)
    {

        dept = newdept;
    }
    void getinfo()
    {
        cout << "name:" << name << endl;
        cout << "dept:" << dept << endl;
        cout << "subject:" << subject << endl;
        cout << "salary:" << salary << endl;
    }
    // member function
};

int main()
{
    Teacher t1("ranit", "c++", "computer science", 25000);

    t1.getinfo();
    Teacher t2(t1); // copy constructor-invoke
    t2.getinfo();
    return 0;
}
