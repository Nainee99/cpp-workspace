#include <iostream>

using namespace std;
class person
{
    int age;
    char name[30];

    public:
    void get_details(void)
    {
    cout<< "Enter your Name:"<<endl;
    cin>>name;
    cout<< "Enter your Age:"<<endl;
    cin>>age;


    }
    void display_details(void);


};
void person::display_details(void)
{
    cout<< "NAME:"<<name<<endl;
    cout<< "AGE:"<<age<<endl;

}

int main()
{
    person p;
    p.get_details();
    p.display_details();
    return 0;
}