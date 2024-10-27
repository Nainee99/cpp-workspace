#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ofstream out("d:\\two.txt", ios::app);
    while(ch!='.')
    {
        cout<<"Enter a Character. ";
        cin>>ch;
        out.put(ch);
    }
    out.close();
}