#include<bits/stdc++.h>
using namespace std;

   int DecimalToOctal(int n)
   {
    int x=1;
    int ans = 0;

    while (x<=n)
        x*=8;
        x/=8;
    while (x>0)
    {
        int LastDigit = n/x;
        n-= LastDigit*x;
        x/=8;
        ans=ans*10+LastDigit;
    }
    return ans;
 }

int main(){
      int n;
      cout<<"Enter A number : ";
      cin>>n;
      cout<<DecimalToOctal(n)<<endl;
      return 0;
}