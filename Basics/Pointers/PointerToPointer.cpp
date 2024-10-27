#include<iostream>
using namespace std;

int main()
{
    int a =10;
    int*p;
    p = &a;

    cout << *p <<endl;  //10

    int**q =&p;

    cout << *q <<endl; // the address stored in p of a
    cout << **q << endl; // this will give the value of a = 10
    return 0;
}