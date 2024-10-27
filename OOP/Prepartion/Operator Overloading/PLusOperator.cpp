#include<iostream>
using namespace std;

class ADD
{
   private:
     int a;
     int b;
  public:

   ADD( int x = 0 , int y = 0 )
   {
         a = x ;
         b =  y;
   }
   
   void display()
   {
    cout<< a << endl <<b << endl;
   }

  ADD operator+(ADD m)
  {
    ADD Temp;
    Temp.a= a + m.a ;
    Temp.b= b  +  m.b ;

  return Temp;
  } 


};

int main()
{
    ADD n1(5,6),n2(7,9);
    ADD n3 = n1 +n2;
    
    n3.display();

    return 0;
}