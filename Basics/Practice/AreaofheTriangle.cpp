#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a, b, c , s , area;
    
    cout<<"Enter the three sides of the triangle : "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
  

    s=(a+b+c)/2;

   area=sqrt(s*(s-a)*(s-b)*(s-c));

   cout<<"Area of the Triangle is :"<<area<<endl;
   return 0; 
}