#include<iostream>
#include<string>
using namespace std;
 class Cstring
 {
    private:
      int size;
      char*str;
    public:
     
    Cstring(Cstring & other)
    {
        size = other.size;
        str = new[size + 1];
        strcpy(str,other.str);
    }
 };


 // part 2

#include<iostream>
#include<string>
using namespace std;
class person
{
  private:
   Cstring fname;
   Cstring lname;
   int age;
 public:
 //parametrizred constructor
    person(Cstring n = "Muhammad", Cstring e = "Abdullah" , int a = 24)
    {
        fname = n;
        lname = e;
        age = a;
    }

//copy constructor
person(Cstring & other)
{
    fname = other.fname;
    lname = other.lname;
    age = other.age;
}

};
