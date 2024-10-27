#include<iostream>
using namespace std;

int main()
{
    int num , OriginalNum , remainder , result=0;
    cout<<"Enter a three digit number : ";
    cin>>num;
    OriginalNum=num;

    while(OriginalNum!=0){
        remainder=OriginalNum%10;
        result+=remainder*remainder*remainder;
        OriginalNum /=10;
    }
    if (result==num)
    {
        cout << num << "  is an armstrong number.";
    }
    else
    cout<<num<<"  is not an armstrong number.";
    return 0;
}