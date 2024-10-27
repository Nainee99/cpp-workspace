// C++ program to explain 
// Single inheritance
/*#include<iostream>
using namespace std;
  
// base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};
  
// sub class derived from a single base classes
class Car : public Vehicle {
  
};
  
// main function
int main()
{   
    // Creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}*/
/*Aanother Example*/
#include<iostream>
using namespace std;
  
class A
{
    protected:
    int a;
    
    public:
        void set_A()
        {
            cout<<"Enter the Value of A=";
            cin>>a;
              
        }
        void disp_A()
        {
            cout<<endl<<"Value of A="<<a;
        }
};
  
  
class B: public A
{
    int b,p;
      
    public:
        void set_B()
        {
            set_A();
            cout<<"Enter the Value of B=";
            cin>>b;
        }
          
        void disp_B()
        {
            disp_A();
            cout<<endl<<"Value of B="<<b;
        }
          
        void cal_product()
        {
            p=a*b;
            cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p;
        }
          
};
  
main()
{
      
    B _b;
    _b.set_B();
    _b.cal_product();
      
    return 0;
      
}

