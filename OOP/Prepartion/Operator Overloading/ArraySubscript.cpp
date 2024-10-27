#include<iostream>
using namespace std;
class Marks
{
  private:
    int subject[3];
  public:
    Marks(int sub1 , int sub2 , int sub3)
    {
        subject[0] = sub1 << endl;
        subject[1] = sub2 << endl;
        subject[2] = sub3 << endl;

    }

    // overloading array subscript
    /*since this is a spectial function we can not overload it using friend function and it is non static function*/
    int operator[](int position)
    {
        return subject[position];
    }
};
int main()
{
    Marks ali(22,55,66);
    cout <<  ali[0];
    cout <<  ali[1];
    cout <<  ali[2];


    return 0;
}