#include<iostream>
using namespace std;
int main()
{
    int n;
    int c;
    c=1;
    cout<<"Enter a Number\n";
    cin>>n;

    while (c<=10)
    {
        cout<<n<<"*"<<c<<"="<<n*c<<endl;
        c=c+1;
    }
    
    return 0;
}