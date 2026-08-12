#include <iostream>
#include <string>
using namespace std;

class Student1
{
public:
    string name;
    int age;

    Student1(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
// parent/base
class Student2 : public Student1
{
public:
    int rollno;
    Student2(string name, int age, int rollno) : Student1(name, age)
    {
        this->rollno = rollno;
    }
    void getinfo()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "rollno:" << rollno << endl;
    }
};
// child/derived
int main()
{
    Student2 s2("ranit", 19, 1002);

    s2.getinfo();

    cout << s2.name;

    return 0;
}