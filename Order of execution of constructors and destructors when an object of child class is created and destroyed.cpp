/*This simple program shows the order of call of constructors and destructors(base class and child class) and
order of execution of constructors ans destructors*/

#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Base class constructor is called.\n";
    }

    ~Base()
    {

        cout<<"Base class destructor is called.\n";
    }
};

class Derived: private Base
{
public:

    Derived()
    {

        cout<<"Derived class constructor is called.\n";
    }

    ~Derived()
    {
        //
        cout<<"Derived class destructor is called.\n";

    }


};

int main()
{
   Derived d;
}
