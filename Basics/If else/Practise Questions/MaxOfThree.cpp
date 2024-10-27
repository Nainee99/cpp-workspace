#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c)
        {
            cout<<"A is Max\n";
        }else{
            cout<<"C is Max\n";
        }
    }else{
        if ((b>c))
        {
           cout<<"B is Max\n";
        }else{
            cout<<"C is Max\n";
        }
        

    }
    return 0;
}