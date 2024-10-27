#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Bank
{
private:
char name[20];
int acno;
char actype[20];
int bal;
public:
Bank()    /*Constructor initialize the value*/
{
    cout<<"Enter your name : ";
    gets(name);
    cout<<"Enter your account type : ";
    gets(actype);
    cout<<"Enter your account no. : ";
    cin>>acno;
    cout<<"Enter your opening balance : ";
    cin>>bal;
}
void deposit(int amt)  /*Here is the deposit function*/
{
    bal=bal+amt;
    cout<<"\n Balance After Deposit : "<< bal<<endl;
}
void withdraw(int amt)  /*Here is the Withdrawl function*/
{
    if (amt>bal)
    {
      cout<<"Not Enough Balance  "<<endl;
    }
    else
    {
        bal=bal-amt;
        cout<<"Balance After Withdraw : "<<bal<<endl;
    }
}
void display() /*This will display all the details*/
{
    cout<<" Account Details "<<endl;
    cout<<"Account Holder Name : "<<name<<endl;
    cout<<"Account Type : "<< actype<<endl;
    cout<<"Account No. : "<<acno<<endl;
    cout<<"Current Balance : "<<bal<<endl;
}
void Exit() /*This will terminate the code*/
{
    cout<<"The program is terminating in  "<<endl;
    cout<<"  3  ";
    cout<<"  2  "; 
    cout<<"  1  ";
}
};

int main()
{
    int choice,a;
    Bank ac;
    do
    {
        cout<<"\n\n Choice List \n\n";
        cout<<" 1)- Deposit \n";
        cout<<" 2)- Withdraw \n";
        cout<<" 3)- Display all Details \n";
        cout<<" 4)- EXIT \n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
          cout<<"Enter amount to Deposit : ";
          cin>>a;
          ac.deposit(a);
         break;
         case 2:
          cout<<"Enter amount to Withdraw : ";
          cin>>a;
          ac.withdraw(a);
         break;
         case 3:
         ac.display();
         case 4:
         ac.Exit();
         return 0;
         
        }
    } while (1);
    return 0;
}