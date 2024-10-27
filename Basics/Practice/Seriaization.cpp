#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    string name;
    int rollno;
    string branch;
    Student() {}
    Student(string n, int r, string b)
    {
        name = n;
        rollno = r;
        branch = b;
    }
    friend ofstream &operator<<(ofstream &ofs, Student s);  // ofs is the object of ofstream
    friend ifstream &operator>>(ifstream &ifs, Student &s); // ifs is the object of ifstream
};
ofstream &operator<<(ofstream &ofs, Student s)
{
    ofs << s.name << endl;
    ofs << s.rollno << endl;
    ofs << s.branch << endl;
    return ofs;
}
int main()
{
    Student s1("James", 28, "IT");
    ofstream ofs("Student.txt", ios::trunc);
    ofs << s1;
    ofs.close();
}
