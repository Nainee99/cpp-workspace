#include <iostream>
using namespace std;

class Marks{
    private:
     int intmarks;
     int extmarks;
    public:
     Marks()
     {
        intmarks = 0;
        extmarks = 0;
     }

     Marks(int n, int m )
     {
        intmarks = n;
        extmarks = m;
     }

     void display (){
        cout<<intmarks<<endl<<extmarks<<endl;
     }

      Marks  operator-(Marks m);

};

Marks Marks :: operator-(Marks m)
{
    Marks temp;
    temp.intmarks = intmarks - m.intmarks;
    temp.extmarks = extmarks - m.extmarks;
    return temp;
}

int main()
{
    Marks m1(10,20),m2(30,40);
    Marks m3 = m2 - m1;
    m3.display();
    return 0;
}