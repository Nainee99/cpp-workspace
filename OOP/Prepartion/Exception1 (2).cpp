#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<< " Enter your age : "<<endl;
    cin>>age;


     try
     {
          if (age>=24)
          {
            cout<<"You have access to drink alocohol."<<endl;
          }
          else{
            throw(age);
          }    
     }

     catch(int age)
     {
        cout<<"You don't have the access to drink alcohol Because your age is less than 24."<<endl;
        cout<<"Your age is :"<<age<<endl;
     }
    return 0;
}