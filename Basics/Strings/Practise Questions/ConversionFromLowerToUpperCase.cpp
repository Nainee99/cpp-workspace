#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str = "fagscdrdhsdhdch";


    /*cout << "Enter a string :  "<< endl;
    getline(cin,str);

    //  cout << 'a'-'A'<<endl;  = 32

    // convert into upper case

    for (int i = 0; i < 1; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        cout << str << endl;
    }

    // convert to lower case
    for (int i = 0; i < 1; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        cout << str << endl;
    }*/

    //we can also do this using a built in function  called transform

    transform(str.begin() ,str.end() , str.begin(), :: toupper);
    cout << str << endl;

   transform(str.begin() ,str.end() , str.begin(), :: tolower);
    cout << str << endl;
   
    return 0;
}