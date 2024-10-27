#include<iostream>
using namespace std;

int area(float r)
{
  float area;
  area=4.0*3.14*r*r;
  cout<<"Area is:" <<area<<endl;
}
int Cir(float r)
{
    float cir;
    cir=(4.0/3.0)*3.14*r*r*r;
    cout<<"Circumfernce is: "<<cir<<endl;
}
int main()
{
    int radius;
    cout<<"Enter the radius : "<<endl;
    cin>>radius;

    area(radius);
    Cir(radius);
    return 0;
}