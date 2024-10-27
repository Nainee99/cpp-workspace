#include<iostream>
using namespace std;
int main()
{
 int a= 5;
 void *ptr;
 ptr =&a;
 cout <<*(int*)ptr;
 return 0;
}