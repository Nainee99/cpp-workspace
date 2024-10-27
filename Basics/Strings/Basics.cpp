#include<iostream>
#include<string>
using namespace std;

int main()
{
 /* Decalaration
  string str;
   For taking an line as input
 getline(cin,str);
  cout <<  str <<endl;*/
  

 /* lets append string
  string s1 =" Has";
  string s2 = "nain ";

 s1.append(s2);
  anther way of doing it
 cout << s1 <<endl;
 cout <<s1 + s2 <<endl;*/

 /*Lets clear an string

 string abc = {"Abvsgdvhgdvdv avvfvkafv akfvgak"};
 abc.clear();
 cout << abc;*/

/*Lets compare two string*/
string s1 = "Abc" ; 
string s2 = "Abc" ;

if (s1.compare(s2)==0)
{
    cout << " Strings are equal\n";
}else{
    cout<<s1.compare(s2)<<endl;
}





    return 0;
}