//Friend function

#include<iostream>
using namespace std;
class student
{
private:
    string name,branch;
    int rollNo;

    friend void display(student s)//Doesn't matter whether you declare it in private or public as it is not a member of the class.
    {
        cout<<"Name :"<<s.name;
        cout<<"\nBranch :"<<s.branch;
        cout<<"\nRoll number :"<<s.rollNo;
    }
public:
    student(string n, string b, int r)
    {
        name=n;
        branch=b;
        rollNo=r;
    }

};
int main()
{
    student s("Shubham","IT",79);
    display(s);//Calling is just like normal function.
}
