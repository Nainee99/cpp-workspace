#include <iostream>


using namespace std;
class Employee{
    protected:
        int employee_id;
        double scale;
    public:
        void input(){
            cout<<"\nEnter employee id:";
            cin>>employee_id;
            cout<<"\nEnter employee scale:";
            cin>>scale;
        }
        void show(){
            cout<<"\nEmployee ID:"<<employee_id<<endl;
            cout<<"\nEmployee scale:"<<scale<<endl;
        }
};
class Manager:public Employee{
    private:
        int manager_id;
        string dept;
    public:
        void input(){
            cout<<"\nEnter manager id: ";
            cin>>manager_id;
            cout<<"\nEnter manager department: ";
            cin>>dept;
        }
        void show(){
            cout<<"\nManager ID:"<<manager_id<<endl;
            cout<<"\nManager department:"<<dept<<endl;
        }
};
int main()
{
    Employee e;
    e.input();
    e.show();
    Manager m;
    m.input();
    m.show();


    return 0;
}
