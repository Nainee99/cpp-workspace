#include<iostream>
using namespace std;

class cuboid
{
 private:
    float x;
    float y;
    float z;

    float validateMeasurement(int x)
    {
          if(x>0 && x<35.0)
          {
            return x;
          }else
          {
            return 1;
          }
          

    }
public:
// default constructor
    cuboid()
    {
        x = 1.0;
        y = 1.0;
        z = 1.0;
    }
  //parametrized constructor
   cuboid(int X,int Y, int Z )
   {
    x = validateMeasurement(X);
    y = validateMeasurement(Y);
    z = validateMeasurement(Z);
   }
// copy constructor
  cuboid(cuboid & other)
  {
    other.x = x;
    other.y = y;
    other.z = z;
  }
// setter function
 void set(int len)
 {
   x = validateMeasurement(len);
 }

  void set(int wid)
 {
   x = validateMeasurement(wid);
 }

  void set(int hei)
 {
   x = validateMeasurement(hei);
 }

 //getter function
 void input()
 {
    float len,wid,hei;

    cout<<"Enter length : "<<endl;
    cin>>len;
    x = validateMeasurement(len);

    cout<<"Enter width : "<<endl;
    cin>>wid;
    y = validateMeasurement(wid);

    cout<<"Enter height : "<<endl;
    cin>>hei;
    z = validateMeasurement(hei);
 }

friend ostream & operator<<(cuboid& obj ,   ostream & COUT);


cuboid operator+(cuboid & other)
{
  cuboid result;
  result.x = x + other .x;
  result.y = y + other .y;
  result.z = z+ other.z;
  return result;
}
 
};
 ostream & operator<<(cuboid& obj ,   ostream & COUT)
 {
    COUT<<"length : "<<obj.x<<" Width : "<<obj.y<<"Height : "<<obj.z<<endl;
    return COUT;
    
 }


int main()
{
    cuboid c1; // Default constructor called
    cuboid c2(2, 3, 4); // Parameterized constructor called
    cuboid c3(c2); // Copy constructor called

    // Displaying the dimensions of c1, c2 and c3
    cout << "Dimensions of c1: " << c1 << endl;
    cout << "Dimensions of c2: " << c2 << endl;
    cout << "Dimensions of c3: " << c3 << endl;

    // Setting the dimensions of c1 using the set() function
    c1.set(5);
    c1.set(6);
    c1.set(7);

    // Displaying the updated dimensions of c1
    cout << "Dimensions of c1 after update: " << c1 << endl;

    // Inputting the dimensions of c3 using the input() function
    cout << "Enter dimensions for c3: " << endl;
    c3.input();

    // Displaying the updated dimensions of c3
    cout << "Dimensions of c3 after input: " << c3 << endl;

    // Adding c1 and c2 to get c4
    cuboid c4 = c1 + c2;

    // Displaying the dimensions of c4
    cout << "Dimensions of c4: " << c4 << endl;

    return 0;
}
