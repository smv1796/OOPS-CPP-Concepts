/*
Problem: There are 2 methods one is present in the Base class and another one is present in the Derived class. Both the
functions have same name and signature. Suppose we create a pointer to the Base and store the address of an object of child class and
when we call the function using the pointer, the pointer present in the Base class will run instead of the one present in the
Derived class thus defeating the purpose of the method overriding. This happens because of early binding of function calls
to the functions. In other words it is not possible for the compiler to know the contents of the pointer during compile time, therefore
it just looks at the type of pointer instead of the contents inside of it.

Solution: The problem can be solved by making the function(which is being overriden) present in Base class as virtual.
*/

#include<iostream>
using namespace std;
class Base
{
public:
   virtual void func()
    {
        cout<<"The one in Base class.\n";
    }
};

class Derived:public Base
{
public:
    void func()
    {
        cout<<"The one in the Derived class.\n";
    }
};

int main()
{
    Base *bp;
    Derived d1;
    bp=&d1;
    (*(bp)).func();//Try running the program after omitting the virtual keyword from line 17
}
