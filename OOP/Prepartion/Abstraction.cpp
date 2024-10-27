#include<iostream>
using namespace std;

class Smartphone
{
  private:

  public:
    virtual void TakeaSelfie() = 0;

};
class Android : public Smartphone
{



}; 

int main()
{
    Smartphone*s1 = new Android;

    return 0;
}