#include<iostream>
using namespace std;
int sum(float a, float b,float  c , float d )
{
   float sum;
  sum=a+b+c+d;
  cout<<"The Sum is : "<<sum<<endl;
}
int avg (float a, float b,float  c , float d )
{
   float avg;
  avg=a+b+c+d/4.0;
   cout<<"The Average is : "<<avg<<endl;
}
int Pro(float a, float b,float  c , float d )
{
  float pro;
  pro=a*b*c*d;
  cout<<"The Product is : "<<pro<<endl;
}
int main()
{
    int a, b, c, d;
    cout<<"Enter the 4 numbers : "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    sum(a, b, c, d);
    avg(a, b, c, d);
    Pro(a, b, c, d);

    return 0;
}
