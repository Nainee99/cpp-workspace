#include<iostream>
using namespace std;
int main()
{
    int n,c,f;
    c=1;
    f=1;
    cout<<"Enter a number : \n";
    cin>>n;

     while (c<=n)
     {
        f=f*c;
        c=c+1;
     }
     cout<<"Factorial of Number : \n"<<f;
     
    return 0;
}