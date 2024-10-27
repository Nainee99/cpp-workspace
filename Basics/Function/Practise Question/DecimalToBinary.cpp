#include<bits/stdc++.h>
using namespace std;

   int DecimalToBinary(int n)
   {
    int x=1;
    int ans = 0;

    while (x<=n)
        x*=2;
        x/=2;
    while (x>0)
    {
        int LastDigit = n/x;
        n-= LastDigit*x;
        x/=2;
        ans=ans*10+LastDigit;
    }
    return ans;
 }

int main(){
      int n;
      cout<<"Enter A number : ";
      cin>>n;
      cout<<DecimalToBinary(n)<<endl;
      return 0;
}