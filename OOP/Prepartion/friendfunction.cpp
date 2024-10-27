#include<iostream>
using namespace std;

class Alpha
{
    private:
      int A1;

    public:
       Alpha(int arg = 0)
       {
        A1 = arg;
       }
       void friend Fun();
};

class Beta
{
    private:
     int B1;
    
    public:
      Beta(int arg = 0)
      {
        B1 = arg;
      }
      void friend Fun();
};

void Fun()
{
    Alpha a(10);
    Beta b(32);

    int x = a.A1 + b.B1;

    cout<<" Sum = "<< x;
}

int main()
{
    Fun();

   return 0; 
}