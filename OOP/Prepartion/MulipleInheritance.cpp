// // C++ program to explain
// // multiple inheritance

// #include<iostream>
// using namespace std;
  
// class A
// {
//               protected:
//               int a;
    
//               public:
//                   void set_A()
//                   {
//                         cout<<"Enter the Value of A=";
//                         cin>>a;
           
//                   }
  
//                   void disp_A()
//                   {
//                         cout<<endl<<"Value of A="<<a;
//                   }
// };
  
// class B: public A
// {
//            protected:
//                 int b;
              
//            public:
//                    void set_B()
//                 {
//                       cout<<"Enter the Value of B=";
//                        cin>>b;
//                    }
  
          
//                 void disp_B()
//                   {
//                      cout<<endl<<"Value of B="<<b;
//                   }
// };
  
// class C: public B
// {
//       int c,p;
        
//       public:
//           void set_C()
//           {
//                  cout<<"Enter the Value of C=";
//                  cin>>c;
//            }
          
//            void disp_C()
//            {
//                  cout<<endl<<"Value of C="<<c;
//            }
      
//             void cal_product()
//              {
//                    p=a*b*c;
//                   cout<<endl<<"Product of "<<a<<" * "<<b<<" * "<<c<<" = "<<p;
//               }
// };
  
// main()
// {
      
//     C _c;
//     _c.set_A();
//     _c.set_B();
//     _c.set_C();
//     _c.disp_A();
//     _c.disp_B();
//     _c.disp_C();
//     _c.cal_product();
      
//     return 0;
      
// }
// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;
  
// first base class
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};
  
// second base class
class FourWheeler {
public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle\n";
    }
};
  
// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
};
  
// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base classes.
    Car obj;
    return 0;
}
