#include<iostream>
using namespace std;
int main()
{
  int *ptr = (int *)malloc(sizeof(int));
  int a =5;
  ptr =&a;
  free(ptr);
  cout<<*ptr<<endl;
 return 0;
}