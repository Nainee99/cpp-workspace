#include<iostream>
#include<string>
using namespace std;

class Person
{
   private:
      string name;
      int age;
    public:
      Person()
      {
        name="No Name";
        age = 0;
      }

    friend ostream &operator<<(ostream&output,Person&p); //Insertion
    friend istream&operator>>(istream&input,Person&p); //Extraction
};

    ostream&operator<<(ostream&output,Person&p)
     {
        output <<"My name is : "<<p.name <<"  and my age is : "<<p.age<<endl;
        return output;
     }

    istream&operator>>(istream&input,Person&p)
    {
        input >> p.name >> p.age ;
        return input;
    }
int main()
{

    cout<<"Enter you name and age : "<<endl;
    Person obj;
    cin >> obj;
    cout << obj;


    return 0;
}