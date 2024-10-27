#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[50];
    int i;
    ofstream out("d:\\sample.txt", ios::app);
    if (!out)
    {
        cout<<"Error in opening file. ";
        exit(1);
    }
    for (int i = 0; i <= 3; i++)
    {
        cout<<"Enter a string : ";
        gets(str);
        out<<str<<"   ";
    }
    out.close();
}
