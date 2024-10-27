#include<iostream>
#include<cstdlib>
#include<stdexcept>
using namespace std;
class Student
{
  private:
   string name;
   int age;
 public:
  Student()
  {
    name = " noname";
    age = 0;
  }

  Student(string Name , int Age)
  {
    this -> name = Name;
    this ->age = Age;
  }

  void whoAreYou()
  {
    cout<<" Hi my name is "<<name <<" and my age is "<<age <<endl;
  }

  //new overload operator
  void*operator new(size_t size)
  {
    void*ptr;
    cout<<"OVeraloaded new  size is "<< size <<endl;
    ptr = malloc(size);
    if(!ptr)
    {
        bad_alloc ba;
        throw ba;
    }
    return ptr;
  }

  //delete operator

  void operator delete(void*ptr)
  {
    cout<<" Overloaded delete "<<endl;
    free(ptr);
  }
    
};
int main()
{

Student *aliptr;

try
{
    aliptr= new Student ( " anil", 24);
    aliptr->whoAreYou();
    delete aliptr;
}
catch(bad_alloc b)
{
    cout<<b.what()<<endl;
}
    return 0;
}