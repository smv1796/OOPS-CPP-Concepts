//Different types of constructor
#include<iostream>
using namespace std;

class student
{
    string name,branch;
    int rollNo;

    public:
    student()//default constructor
    {
        name="Default";
        branch="default";
        rollNo=0;
    }

    student(string n, string b, int r)//Parameterised constructor.
    {
        name=n;
        branch=b;
        rollNo=r;
    }

    student(student& s)// Copy constructor.
    {
        name=s.name;
        branch=s.branch;
        rollNo=s.rollNo;
    }

    void display()
    {
        cout<<"Name: "<<name;
        cout<<"\nBranch: "<<branch;
        cout<<"\nRollno: "<<rollNo<<endl;
    }
};
int main()
{
    student s1;
    student s2("Shubham","IT",79);
    student s3=s2;//s3=s2
    s1.display();
    s2.display();
    s3.display();
}
