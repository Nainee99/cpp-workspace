#include<iostream>
using namespace std;

class Marks
{
private:
    int mark;
public:
    Marks()
    {
        mark=0;
    }

     Marks(int m)
    {
        mark=m;
    }
    
    void YourMarks()
    {
        cout<<" Your Marks is : "<<mark<<endl;
    }

   void operator++()
   {
     mark +=1;
   }

   friend void operator--(Marks&m);
};

 void operator--(Marks&m)
 {
    m.mark -= 1;
 }


int main()
{
    Marks m1(10);
    m1.YourMarks();

    ++m1;
    m1.YourMarks();

    --m1;
    m1.YourMarks();

    return 0;
}