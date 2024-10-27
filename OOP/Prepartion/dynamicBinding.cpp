#include <iostream>
using namespace std;
 
class GFG {
public:
   virtual void call_Function() // function that call print
    {
        print();
    }
   virtual void print() // the display function
    {
        cout << "Printing the Base class Content" << endl;
    }
};
class GFG2 : public GFG // GFG2 inherit a publicly
{
public:
    void print() // GFG2's display
    {
        cout << "Printing the Derived class Content" << endl;
    }
};
int main()
{
    GFG geeksforgeeks; // Creating GFG's object
    geeksforgeeks.call_Function(); // Calling call_Function
    GFG2 geeksforgeeks2; // creating GFG2 object
    geeksforgeeks2.call_Function(); // calling call_Function
                                    // for GFG2 object
    return 0;
}
