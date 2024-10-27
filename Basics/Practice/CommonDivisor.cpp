#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"Enter three numbers : "<<endl;
    cin>>a;
     cin>>b;
      cin>>c;

    if (a== 0)
    {
        cout<<"Divisor can not be zero ."<<endl;
    }
    else
    {
      if  ((b%a==0)&&(c%a==0))
      {
        cout<< a <<" is the common divisor of "<<b<<" and "<<c<<endl;
      }
      else
      {
        cout<< a <<" is not the common divisor "<<b<<" and "<<c<<endl;
      }
      
    }
    
    return 0;
}