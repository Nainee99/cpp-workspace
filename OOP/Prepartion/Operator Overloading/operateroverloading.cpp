/*postfix and prefix operater overloading*/
#include<iostream>
#include<conio.h>
using namespace std;

class count
{
private:
    int n;
public:
    count()
    {
        n=0;
    }
  void show()
  {
    cout<<"n = "<<n<<endl;
  }
    count operator ++()
  {
    count temp;
    n=n+1;
    temp.n = n;
    return temp;
  }
  /*for postfix*/
      count operator ++(int)
  {
    count temp;
    n=n+1;
    temp.n = n;
    return temp;
  }
};

int main()
{
    count x;
    x.show();
    ++x;
    x++;
    x.show();
    /*prefix overloading code*/
/*count obj1,obj2;
 obj1.show();
 obj2.show();
obj2=++obj1;
obj1.show();
obj2.show();*/

return 0;

}