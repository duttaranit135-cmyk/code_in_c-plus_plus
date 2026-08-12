#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    string bio;
    double id;
    string dept;
    string salary;

    void changeDept(string newDept)
    {
        dept = newDept;
    }
};
int main()
{
    Employee e1;

    e1.name = "Ranit Dutta";
    e1.bio = "CEO and owner";
    e1.id = 200012;
    e1.dept = "ALL";
    e1.salary = "80 lakh per month";

    cout << e1.name << endl;
    cout << e1.bio << endl;
    cout << e1.id << endl;
    cout << e1.dept << endl;
    cout << e1.salary << endl;

    Employee e2;

    e2.name = "Ramprasad sen";
    e2.bio = "Head of the manager";
    e2.id = 20001;
    e2.dept = "master card";
    e2.salary = "20 lakh per month";

    cout << e2.name << endl;
    cout << e2.bio << endl;
    cout << e2.id << endl;
    cout << e2.dept << endl;
    cout << e2.salary << endl;

    Employee e3;

    e3.name = "Harry Orten";
    e3.bio = "assistant manager";
    e3.id = 20056;
    e3.dept = "master card";
    e3.salary = "12 lakh per month";

    cout << e3.name << endl;
    cout << e3.bio << endl;
    cout << e3.id << endl;
    cout << e3.dept << endl;
    cout << e3.salary << endl;

    return 0;
}
