#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    // propertise
    // object
    void changedept(string newdept)
    {

        dept = newdept;
    }

    void setsalary(double s)
    {
        salary = s;
    }
    // setter
    double getsalary()
    {
        return salary;
    }
    // getter

    // method/member function
};

int main()
{
    Teacher t1;
    t1.name = "ranit";
    t1.subject = "c++";
    t1.dept = "computer science";
    t1.setsalary(25000);

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
    cout << t1.getsalary() << endl;

    return 0;
}
