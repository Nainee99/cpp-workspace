#include<iostream>
using namespace std;

int main()
{
    int num , denum , result;
    
    cout<<"Enter the numenator :"<<endl;
    cin>>num;
    cout<<"Enter the denomenator :"<<endl;
     cin>>denum;
    
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