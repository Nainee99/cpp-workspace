#include<iostream>
using namespace std;

void increment(int*a)
{
  int i = *a;
  cout<< ++i <<endl;

}

int main()
{
    int a = 5;
    

    increment(&a);
    return 0;
}