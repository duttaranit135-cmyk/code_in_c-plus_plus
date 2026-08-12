#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
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
        cout << "subject:" << subject << endl;
        cout << "dept:" << dept << endl;
        cout << "salary:" << salary << endl;
    }
    // method
};

int main()
{
    Teacher t1("ranit", "c++", "computer science", 25000);
    t1.getinfo();
    return 0;
}
