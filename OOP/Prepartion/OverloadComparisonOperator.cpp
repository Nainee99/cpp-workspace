#include<iostream>
#include<string>
using namespace std                             ;

class Person                                    {
  private:
    int weight                                  ;
  public:
    Person(int w = 0)                           {
        weight = w                              ;}

   friend bool operator>(Person x , Person y)   ;
   friend bool operator<(Person x , Person y)   ;
                                                };

bool operator<(Person x ,Person y)              {
    return x.weight < y.weight                  ;}

bool operator>(Person x ,Person y)              {
    return x.weight > y.weight                  ;}

int main()                                      {
    int w1 , w2                                 ;

    cout<<" Enter weight of jon  :"<<endl       ;
        cin>>w1                                 ;

    cout<<" Enter weight of rick :"<<endl       ;
      cin>>w2;   

   Person jon(w1)                               ;
   Person rick(w2)                              ;

   if (jon > rick)                              {
      cout<<" jon is heavy "<<endl              ;}
   else                                         {
    cout<<"rick is heavy "<<endl                ;}
                                                }