#include<iostream>
using namespace std;
int main()
{
//  int arr[3] = {1,2,3};
//  int *ptr;
//  ptr= &arr[0];


// // for increment  
//  for (int i = 0; i <3; i++)
//  {
//     cout <<*ptr<<endl;
//     ptr++;
//  }


 int arr[3] = {4,5,6};
 int *ptr;
 ptr= &arr[2];


// for decrement  
 for (int i = 0; i <3; i++)
 {
    cout <<*ptr<<endl;
    ptr--;
 }
 
 return 0;
}