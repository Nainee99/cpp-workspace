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
  String operator +(String s)
  {
    String temp;
    strcpy(temp.str,str);
    strcat(temp.str,s.str);
    return temp;
  }
};
int main()
{
    String x,y,z;
    x.in();  
    y.in();
    x.show();
    y.show();
    cout<<"Concatenating x and y in z : ";
    z=x + y;
    z.show();
    return 0;


}

