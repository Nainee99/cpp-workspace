#include<iostream>
using namespace std;

int sum(int n){
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        ans+=i;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;

    // int ans=n*(n+1)/2;     // formula n*(n+1)/2
    //  cout<<ans<<endl;

    cout<<sum(n);
    return 0;
}
