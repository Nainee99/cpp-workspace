#include<iostream>
using namespace std;

class alpha
{
   private:
     int a;
     int b;
  public:
     alpha()
     {
        a=5;
        b=5;
        //stat ++;//we will do this using static function 
     }

    static int stat;//Static data member
    /*static member can only access static member*/
    static int getstat()
    {
        stat ++;
        return stat;
    }
};

int alpha :: stat = 0;
int main()
{ 
    
    alpha a1;
     
    
    cout<<" value using object "<<a1.getstat()<<endl;
   cout<<"value using class name "<<alpha::getstat()<<endl;
   

    /*cout<<" Value  using a1 obj = "<<a1.stat << endl;
    cout<<" Value  using a2 obj = "<<a2.stat << endl;

    cout<<" Value  using class name  = " << alpha::stat<<endl;*/
}

