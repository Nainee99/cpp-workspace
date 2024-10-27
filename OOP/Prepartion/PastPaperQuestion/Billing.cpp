#include <iostream>
using namespace std;

class Item {
    public:
       char name[100];
       double price;
};

class Bill {

     public:
         int id;
         int itemCount;
         Item* list;
        double billAmount;
};
      void computeOneBill(Bill* perbill)
       {
           double totalAmount = 0;
              for (int i = 0; i < perbill->itemCount; i++) 
              {
                  totalAmount += perbill->list[i].price;
              }
           perbill->billAmount = totalAmount;
      }
      void computeAllBills(Bill* LB, int numBills) 
      {
             for (int i = 0; i < numBills; i++)
               {
                   computeOneBill(&LB[i]);
               }
      }

int main() 
{
// Sample usage

Bill bills[2];
Item items1[2] = {{"Item1", 10.0}, {"Item2", 20.0}};
Item items2[3] = {{"Item1", 5.0}, {"Item2", 10.0}, {"Item3", 15.0}};
bills[0].id = 1;
bills[0].itemCount = 2;
bills[0].list = items1;
bills[1].id = 2;
bills[1].itemCount = 3;
bills[1].list = items2;

computeAllBills(bills, 2);
for (int i = 0; i < 2; i++) {
cout << "Bill " << bills[i].id << " Amount: " << bills[i].billAmount << endl;
}
return 0;
}