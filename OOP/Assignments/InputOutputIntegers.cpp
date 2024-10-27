#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    int i,num;
    ifstream file("d:\\number.txt");
    if(!file)
    {
        cout<<"Error in opening file ";
        exit(1);
    }
    cout<<"The file contain the following integers : "<<endl;
    for (int i = 0; i <= 10; i++)
    {
        file>>num;
        cout<<num<<endl;
        if (i<=10 && file.eof())
        {

            cout<<"File is finished.";
            break;
        }   
    }
    file.close();
    return 0;
}