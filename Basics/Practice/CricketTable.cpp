#include<iostream>
#include<iomanip>
using namespace std;

void line();
void star();

struct Cricker
{
    char name[15];
    int runs;
    int innings;
    int tno;
    float avg; 
};

int main()
{
    int runs , innings , i;
    float avg;
    Cricker rec[5];

    cout<<"\n Enter 5 record including following details \n ";
    cout <<"1)   player's Name : \n";
    cout <<"2)   Runs : \n";
    cout <<"3)   Innings : \n";
    cout <<"4)   Times Not out :\n \n";
   
   for (int i = 0; i < 5; i++)
   {
    cout << "\n Enter Player Name : ";
        cin >>rec[i].name;
    cout <<"Enter Runs : ";
        cin >>rec[i].runs;
    cout <<"Enter Innings : ";
       cin>>rec[i].innings;
    cout <<"Enter Time Not Out : ";
       cin >>rec[i].tno;

    rec[i].avg = float (rec[i].runs)/(rec[i].innings);
   }

   cout <<"\n\n\n";
   cout<<setw(49)<<"                     CRICKETER'S TABLE                                 \n";
   line();
   cout<<"                                                                                 \n";
   cout<<setw(15)<<"Player's Name "<< setw(15)<<"Runs "<<setw(15)<<"Innings ";
   cout<<setw(20)<<"Times Not out "<<setw(12)<<"Average\n";
   cout<<"                                                                                 \n";
   line();

   for (int i = 0; i < 5; i++)
   {
     cout <<setw(15)<<rec[i].name<<setw(15)<<rec[i].runs<<setw(12)<<rec[i].innings;
     cout<<setw(18)<<rec[i].tno<<setw(16)<<rec[i].avg<<endl;
   }
   line();

   cout<<endl<<endl<<endl;
   star();
   cout<<setw(43)<<"Finish\n";
   star();

}
void line()
{
    for (int i = 0; i < 70; i++)
    {
        cout<<"--";
        cout<<"\n";
       
    }
}
void star()
{
    for (int i = 0; i < 70; i++)
    {
        cout<<"**";
        cout<<"\n";
       
    }  
}
