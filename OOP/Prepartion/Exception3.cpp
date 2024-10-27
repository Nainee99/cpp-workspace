#include"bits/stdc++.h"
using namespace std;

 double squareroot(int n)
 {
      try
      {
        if (n<0)
        {
           throw(n); 
        }
        else{
            cout<<"The square root of the number is : "<< sqrt(n)<<endl;
        }
      }

      catch(int num)
      {
        cout<<"Math Error ! (It is not defined)"<<endl;
      }
 }
 int main()
 {
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    squareroot(num);
    return 0;
 }


