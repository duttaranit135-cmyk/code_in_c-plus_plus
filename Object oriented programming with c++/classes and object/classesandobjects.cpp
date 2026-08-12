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
    // propertise
    // object
    void changedept(string newdept)
    {

        dept = newdept;
    }

    void changesalary(double newsalary)
    {
        salary = newsalary;
    }
    // method
};

int main()
{
    Teacher t1;
    t1.name = "ranit";
    t1.subject = "c++";
    t1.dept = "computer science";
    t1.salary = 25000;

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
    cout << t1.salary << endl;

    return 0;
}
