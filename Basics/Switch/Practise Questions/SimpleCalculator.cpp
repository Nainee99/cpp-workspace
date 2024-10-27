#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
      cout<<"Enter two number\n";
      cin>>n1>>n2;
    
    char op;
      cout<<"Enter an Operator\n";
      cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1 + n2<<endl;
        break;
     case '-':
        cout<<n1 - n2<<endl;
        break;
     case '/':
        cout<<n1 / n2<<endl;
        break;
     case '*':
        cout<<n1 * n2<<endl;
        break;
    
    default:
        cout<<"invalid operation"<<endl;
        break;
    }
    return 0;
}