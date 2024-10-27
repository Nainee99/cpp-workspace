#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    char ch;
    ifstream in("d:\\one.txt");
    ofstream out("d:\\two.txt");
    if(!in)
    {
        cout<<"Error in Opening file.";
        exit(1);
    }
    while(!in.eof())
    {
        in.get(ch);
        out.put(ch);
    }
    in.close();
    out.close();
    return 0;
}