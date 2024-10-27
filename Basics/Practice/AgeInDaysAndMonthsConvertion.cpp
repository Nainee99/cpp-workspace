#include<iostream>
using namespace std;
int main()
{
    int age, days , months;
    cout<<"Enter your age  : "<<endl;
    cin>>age;

    days=age*365;
    months=age*12;

    cout<<"Your age in Days is : "<<days<<endl;
    cout<<"Your age in months is : "<<months<<endl;
    return 0;
    
}