#include<iostream>
using namespace std;

void swap( int *a , int* b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}
int main()
{
    int a = 2;
    int b =4;
   // passing by value
   // swap(a,b);
   // cout << a <<" "<< b <<endl;  // this will not change the value

    // pasing by refernce
   // int *aptr = &a;
   //int *bptr = &b;
   // swap(aptr,bptr);

   //we can also do this like
   swap(&a , &b);
    cout << a <<" "<< b <<endl; // this will swap 
 

    return 0;
}