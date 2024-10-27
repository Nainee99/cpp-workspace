#include<iostream>
using namespace std;
 bool check (int x, int y, int z){
    int a,b,c;
    a = max(x,max(y,z));
    if (a==x)
    {
        b=y;
        c=z;
    }
      else if (a==y)
    {
        b=x;
        c=z;
    }
     else 
    {
        b=y;
        c=x;
    }
    if (a*a==b*b+c*c)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     
    if (check(a,b,c))
    {
      cout<< " Pythagorian Triplet \n";
    }else{
        cout<<"Not a  Pythagorian Triplet \n ";
    }
    
    return 0;
}
