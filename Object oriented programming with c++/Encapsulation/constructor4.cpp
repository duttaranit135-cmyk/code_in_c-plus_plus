#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string subject;
    double salary;
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

    void getinfo()
    {
        cout << "name:" << name << endl;
        cout << "dept:" << dept << endl;
        cout << "subject:" << subject << endl;
        cout << "salary:" << salary << endl;
        cout << "dept:" << dept << endl;
    }
    void changedept(string newdept)
    {
        dept = newdept;
    }
};

int main()
{
    Teacher t1("ranit", "computer science", "c++", 25000);

    t1.getinfo();
    Teacher t2(t1); // copy constructor-invoke
    t2.dept = "ai";
    t2.getinfo();
    return 0;
}
double *ranit;