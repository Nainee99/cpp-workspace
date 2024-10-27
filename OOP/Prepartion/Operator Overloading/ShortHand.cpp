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

    void operator+=(int m)
    {
     mark = mark + m;         
    }

     void operator*=(int m)
    {
     mark = mark * m;         
    }

   friend void operator-=(Marks & currobj , int redmarks);
   friend void operator/=(Marks & currobj , int redmarks);
  
};
        void operator-=(Marks & currobj , int redmarks)
        {
            currobj.mark-=redmarks;
        }

       void operator/=(Marks & currobj , int redmarks)
        {
            currobj.mark/=redmarks;
        }
   


int main()
{
    Marks mymark(100);
    mymark.YourMarks();
    
    mymark+=20;
    mymark.YourMarks();
    
    mymark-=20;
    mymark.YourMarks();

    mymark*=2;
    mymark.YourMarks();

    mymark/=2;
    mymark.YourMarks();
    

    return 0;
}