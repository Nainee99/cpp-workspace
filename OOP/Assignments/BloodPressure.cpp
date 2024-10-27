#include<iostream>
using namespace std;

class Patient
{
private:
    char name[30]; // for name of the patient
    int lowerBP;    // for the patient's lower blood pressure
    int upperBP;     // for the paient's upper blood pressue
public:
void in()
{
    cout<<"Enter the name : "<<endl;
    cin>>name;
    cout<<"Enter lower BP : "<<endl;
    cin>>lowerBP;
    cout<<"Enter upper BP : "<<endl;
    cin>>upperBP;
}
void out()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Lower blood pressure : "<<lowerBP<<endl;
     cout<<"Upper blood pressure : "<<upperBP<<endl;
}
void check()
{
    if (lowerBP==80 || upperBP==120)
    {
        cout<<"Blood pressure is normal "<<endl;
    }else
    {
        cout<<"Blood pressure is not normal "<<endl;
    }
    
}
};


int main()
{
Patient obj;
obj.in();
obj.out();
obj.check();
return 0;
    
}