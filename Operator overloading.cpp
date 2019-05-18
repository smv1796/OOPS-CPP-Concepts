/* Operator overloading. In this an operator is given a special meaning besides it conventional meaning. It's an example
of compile-time polymorphism as the behaviour of the operator is determined at the compile-time only. */

#include<iostream>
using namespace std;

class complexNum
{
    int re,im;

public:

    complexNum()
    {
        re=0;
        im=0;
    }
    complexNum(int r, int i)
    {
        re=r;
        im=i;
    }

    void display()
    {
        cout<<re<<"+i("<<im<<")\n";
    }

   /* friend complexNum operator+(complexNum& c1, complexNum& c2)
    {
       complexNum c;
       c.re=c1.re+c2.re;
       c.im=c1.im+c2.im;
       cout<<"Friend function is used to overload the operator.\n";
       return c;
    }

    One can use either of the functions, ie, member function or friend function to overload the operator.
*/
   complexNum operator+(complexNum& c1)
    {
        complexNum c;
        c.re=re+c1.re;
        c.im=im+c1.im;
        cout<<"Member function is used to overload the operator.\n";
        return c;
    }


};
int main()
{
    complexNum c1(3,4),c2(3,9);
    complexNum c=c1+c2;
    c.display();
}
