/*In const function we cannot change the value of the function but we can do it using mutable keyword with the data member we want to change */
#include<iostream>
using namespace std;

class Base
{ 
    private:
      mutable  int x;
    public:
       Base(){}
       Base(int a)
       {
         x = a;
       }

     void setData(int a)
     { 
        x = a;
     }
     int getData()const
     {  
        x = 20;
         return x;
     }
};
 int main()
 {
    Base obj;
    obj.setData(10);
   cout<< obj.getData() << endl;
         return 0;
 }