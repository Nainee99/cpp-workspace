#include<iostream>
using namespace std;
int main()
{
    int Tp , Nodays , NoPage , remaining ,  Done ;
    cout<<"Enter the total no. of Page of Book :"<<endl;
    cin>>Tp;
    cout<<"Enter the no. of the page read in one day : "<<endl;
    cin>>NoPage;
    cout<<"Enter the no. of days he has been reading : "<<endl;
    cin>>Nodays;
  
     Done=NoPage*Nodays;
     cout<<"You Have read "<<Done<< " Page of the Book"<<endl;
      remaining=Tp- Done;
      cout<<"you have "<<remaining<<" page left to in this book";
    return 0;
}