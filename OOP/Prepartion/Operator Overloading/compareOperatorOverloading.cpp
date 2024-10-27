/*overloading of Binary Operator*/
#include<iostream.>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class String
{
private:
    char str[50];
public:
    String(/* args */)
{
    str[0]='\0';
}
 void in()
 {
    cout<<"Enter string : "<<endl;
    gets (str);
 }
 void show()
 {
    cout<<str<<endl;
 }
  int operator ==(String s)
  {
    if (strlen(str)==strlen(s.str))
    return 1;
    else
    return 0;
  }
};
int main()
{
    String x,y;
    x.in();  
    y.in();
    x.show();
    y.show();
    if (x==y)
    {
        cout<<"both strings are of equal lengths \n";
    }else
    {
        cout<<"both strings are of different lengths \n";
    }
    

    return 0;


}

