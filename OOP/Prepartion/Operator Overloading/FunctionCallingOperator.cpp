#include<iostream>
using namespace std;
class Marks
{
    private:
     int marks;
    public:
     
     Marks(int m)
     {
        cout<<" Constructor is called "<<endl;
        marks = m;
     }

     void whatsYourMarks()
     {
        cout<<"hey i got " << marks <<" marks " <<endl;
     }

     Marks operator()(int mk)
     {
       marks = mk;
       cout<<"operator is called "<<endl;
       return *this;
     }
};

int main()
{
    Marks Alimarks(54);
    Alimarks.whatsYourMarks();

    Alimarks(44);
    Alimarks.whatsYourMarks();
}