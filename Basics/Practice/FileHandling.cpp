#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    fstream myfile;
   /*myfile.open("Nainee.txt",ios::out);//write
    if(myfile.is_open())
    {
        myfile<<"Hello\n";
        //Here we didn't use cout because cout is used to write on the console or screen and myfile is used to write on the file //
        myfile<<"WellCome to My File\n";
        myfile.close();
    }
        myfile.open("Nainee.txt",ios::app);//append
    if(myfile.is_open())
    {
        myfile<<"I am Hasnain\n";
        myfile.close();
    }*/
    myfile.open("Nainee.txt" , ios::in);//read
    if(myfile.is_open())
    {
        string line;
        while (getline(myfile,line))/*Here we are going to read line using getline function from myfile and then we wil store it to line and then we will print it same process will continue untill last line*/
        {
            cout<<line<<endl;        
        }
       myfile.close(); 
    }

system("pause>0");
}