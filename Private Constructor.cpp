/*Implementation of private constructor
Can a constructor be private? Hell yeah, it can be!!!!
In this, we have implemented a private constructor and accessed it with the help of a static member function.
*/

#include<iostream>
using namespace std;

class student
{
  public:

    string name;
    string branch;
    int rollNo;

    static student* initialise(string n, string b, int r)
    {
        student* sp=new student(n,b,r);
        return sp;
    }

    void display()
    {
        cout<<"Name of the student: "<<name;
        cout<<"\nBranch of the student: "<<branch;
        cout<<"\nRoll number of the student: "<<rollNo;
    }

    private:

     student(string n, string b, int r)
    {
        name=n;
        branch=b;
        rollNo=r;
    }
};
int main()
{
    student *sp1=student::initialise("Shubham","Information Technology",79);
    sp1->display();
}

