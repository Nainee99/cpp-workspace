#include<iostream>
using namespace std;

class A
{
    public:
     virtual  void show()
      {
        cout<<"Parent Class A...\n";
      }
};
class B : public A
{
      public:
      void show()
      {
        cout<<"Child Class B...\n";
      }
};
class C : public A
{
      public:
      void show()
      {
        cout<<"Child Class C...\n";
      }
};
int main()
{
 A*ptr[5];

 cout<<"Enter 1 for Class A | 2 for Class B | 3 for Class C\n";
 int op,i;
 for ( i = 0; i < 5; i++)
 {
    cout<<"Which option you wanna Select : "<<endl;
    cin>>op;
    if(op==1)
    {
        ptr[i]=new A;
        //cout<<"Parent class A ....\n";
    }else if(op==2)
    {
        ptr[i]=new B;
       // cout<<"Child Class B....\n";
    }else
    {
        ptr[i]=new C;
       // cout<<"Child class C....\n";
    }
 }
 
 for(i = 0; i < 5;  i++)
 {
    ptr[i]->show();
 }
    return 0;
}