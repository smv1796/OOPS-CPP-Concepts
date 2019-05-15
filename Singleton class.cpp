//Implementation of singleton class, a class whose only one object can be created.
#include<iostream>
#include<vector>

using namespace std;
class student
{
    int r;
    string name,branch;
    static int count;
    student()
    {
        r=0;
        name="Default";
        branch="Default";
    }
    student(int x, string a, string b)//parameterised constructor
    {

        r=x;
        name=a;
        branch=b;
    }

public:
   static student* objectIns(int x, string a, string b)
    {
        if(count!=0)
            return NULL;

        student* s=new student(x,a,b);
        count++;
        return s;
    }

    void display();
};

void student::display()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll no. : "<<r<<"\n";
    cout<<"Branch: "<<branch<<"\n";
}
int student::count=0;
int main()
{
    student* s1p=student::objectIns(79,"Shubham","IT");
    if(!s1p) cout<<"More than 1 object cannot be created";
    student* s2p=student::objectIns(82,"Vubhas","MCE");
        if(!s2p) cout<<"More than 1 object cannot be created\n";


   if(s1p) s1p->display();
    if(s2p) (*(s2p)).display();
}
