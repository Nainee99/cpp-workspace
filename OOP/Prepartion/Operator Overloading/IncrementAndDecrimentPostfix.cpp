#include<iostream>
using namespace std                                            ;

class Marks                                                    {
private:
    int mark                                                   ;
public:
    Marks()                                                    {
        mark=0                                                 ;}

     Marks(int m)                                              {
        mark=m                                                 ;}
    
    void YourMarks()                                           {
        cout<<" Your Marks is : "<<mark<<endl                  ;}

    /*we also do this like prefix but this is another methd*/
    Marks operator++(int)                                      {
        Marks dup(*this)                                       ;
        mark=mark +1                                           ;
        return dup                                             ;}

  friend Marks operator--(Marks&m,int)                         ;
                                                               };
Marks operator--(Marks&m,int)                                  {
    Marks dup(m)                                               ;
     m.mark -= 1                                               ;
        return dup                                             ;}

int main()                                                     {
    Marks m1(100)                                              ;
    m1.YourMarks()                                             ;

   ( m1++).YourMarks()                                         ;
   m1.YourMarks()                                              ;

   ( m1--).YourMarks()                                         ;
   m1.YourMarks()                                              ;

    
 return 0                                                      ;}