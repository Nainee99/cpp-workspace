#include<iostream>
using namespace std;

/*class A
{
    public:
     ~A()
     {
        cout<<" Base Class object is destroyed "<<endl;
     }

};*/

/*If we do this then only half of obj is detroyed only base part if we want to destroy whole obj the we create virtual destructor*/
class A
{
    public:
     virtual~A()
     { 
        cout<<" Base Class object is destroyed "<<endl;
     }

};

class B : public A
{
    public:
     ~B()
     {
        cout<<" Derived Class object is destroyed "<<endl;
     }
};

int main()
{
    B obj;
    A*ptr;
    ptr=&obj;
    return 0;
    
}
