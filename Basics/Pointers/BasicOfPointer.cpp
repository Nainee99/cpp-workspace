#include<iostream>
using namespace std;

int main()
{
    /*int a = 10;
    // decalaration
    int*aptr;
    // initialization
    aptr= &a;

    cout << *aptr << endl;
    // we can also modify value using pointer
    *aptr=20;
    cout << a << endl;

    // we also can perform arithmetic operation like incriment
    cout << aptr <<endl;
    aptr++;
    cout << aptr <<endl;*/

    // using pointer with array
    // if we don't specify the pointer will point the first index of array

    int arr[] ={10,20,30};
    cout <<*arr<<endl;

    int*ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr+i)<<endl;
       // cout <<*ptr <<endl;
        /*ptr++;*/   /*arr++; is illegal*/

    }

    
    
    return 0; 
}