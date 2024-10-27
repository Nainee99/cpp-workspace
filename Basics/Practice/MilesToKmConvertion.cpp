#include<iostream>
using namespace std;
int main()
{
    float miles, temp , km;
    temp=1.609;
      cout<<"Enter distance in miles : "<<endl;
      cin>>miles;

    km=temp*miles;
    cout<<"The Distance in Kilometre is : "<<km<<"Km"<<endl;
    return 0;
}
