#include<iostream>
#include<string>
using namespace std;

class Book
{
protected:
    int BookID;
    char BookName[50];
    int Price;
public:
    Book(){}

    void input()
    {
        cout<<"Enter Book ID : "<<endl;
        cin>>BookID;
        cout<<"Enter Book Name : "<<endl;
        cin>>BookName;
        cout<<"Enter the price of Book : "<<endl;
        cin>>Price;
    }
    void output()
    {
        cout<<"The Book ID is: "<<BookID<<endl;
        cout<<"The Book Name is : "<<BookName<<endl;
        cout<<"The Book's  Price is  : "<<Price<<endl;
    }
};
   class Writer 
   {
   protected:
    char WriterName[50] , Address[100];
    int book;
    Book bk[5];
   public:
    void in()
    {
        cout<<"Enter the name of the Writer :  "<<endl;
        gets(WriterName);
        cout<<"Enter the address of the Writer : "<<endl;
        gets(Address);
        cout<<"Enter the Number of the books written by him : "<<endl;
        cin>>book;
        cout<<"Enter the detail of the books : "<<endl;
        for (int i = 0; i < 5 ; i++)
        {
            bk[i].input();
        }
    }
    void out()
    {
        cout<<"The Name of the writer is : "<<WriterName;
        cout<<"Enter the address of the writer :  "<<Address;
        cout<<"The Number of the books written by him are : "<<book;
        cout<<"\n The Detail of the books "<<endl;
        for (int i = 0; i < 5; i++)
        {
            bk[i].output();
        }
    }
  
   };
    


int main()
{
Writer obj;
obj.in();
obj.out();
return 0;
}


