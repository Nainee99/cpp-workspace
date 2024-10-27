#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char str[50];
ifstream in("d:\\one.txt");
ofstream out("d:\\two.txt");
if (!in)
{
    cout<<"Error in Opening file ";
    exit(1);
}
while (!in.eof())
{
    in>>str;
    out<<str<<" ";
}
in.close();
out.close();
return 0;
}