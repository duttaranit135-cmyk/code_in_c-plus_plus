#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string subject;
    double *salaryptr;

    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        salaryptr = new double;
        *salaryptr = salary;
    }
    // conctructor{allocate memory}

    ~Teacher()
    {
        cout << "Destructor:Memory deallocated" << endl;
        delete salaryptr;
    }
    // destructor{deallocated memory}
    void getinfo()
    {
        cout << "name:" << name << endl;
        cout << "dept:" << dept << endl;
        cout << "subject:" << subject << endl;
        cout << "salary:" << *salaryptr << endl;
    }
};

int main()
{
    Teacher t1("ranit", "computer science", "c++", 25000);

    t1.getinfo();

    return 0;
}
