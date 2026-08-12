#include <iostream>
#include <string>
using namespace std;

class Teacher
{

public:
  Teacher()
  {
    dept = "computer science";
  } // non-parameterised
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
  // member function
};

class account
{
private:
  double balnce;
  string password;
  // data hideing
public:
  string accountid;
  string username;
};
int main()
{
  Teacher t1; // constructor
  t1.name = "ranit";
  t1.subject = "c++";
  t1.salary = 25000;

  cout << t1.name << endl;
  cout << t1.subject << endl;
  cout << t1.dept << endl;
  cout << t1.salary << endl;

  return 0;
}
