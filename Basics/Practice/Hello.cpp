#include<iostream>
#include<string>
using namespace std;

int main()
{   
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   
    int num , denum , result;
    
    cin>>num;
        cout<<" The numenator : "<<num<<endl;

     cin>>denum;
         cout <<" The Denominator : "<<denum<<endl;

    
    try
    {
        if(denum==0)
        {
            throw(denum);
        }
        else{
            result = num / denum;
            cout<<"The output of the division is :"<< result;
        }

    }
    catch(int d)
    {
        cout<<"you can not enter zero in denominator while doing division"<<endl;
    }
    
    

    return 0;
}