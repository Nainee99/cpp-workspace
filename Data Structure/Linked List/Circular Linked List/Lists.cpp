#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1 = {1,2,3,4};
    // auto itr = l1.begin();
    // cout<<*itr<<endl;
   // l1.end() - iterator pointing to  the memory location after 4

    // auto rev_itr = l1.rbegin();
    // cout<<*rev_itr<<endl;
    // l1.rend() - iterator pointing to the memory location after 1
  
    // advance(itr, 2);
    // cout<<*itr<<endl;

    // for traversal using range_base loop 
    // for (auto num : l1)
    // {
    //     cout<<num<<endl;
    // }

    // for treversal using iterator
    for (auto itr = l1.begin(); itr!=l1.end(); itr++)
    {
        cout<<*itr<<"  ";
    }cout<<endl;
     
     // for reverse treversal
    //  for (auto itr = l1.rbegin(); itr!=l1.rend(); itr++)
    // {
    //     cout<<*itr<<"  ";
    // }cout<<endl;

    // inserting values
    auto itr = l1.begin();
    advance(itr,2);
    // l1.insert(itr,3,5);
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r,2); // now r is pointing to 3
    l1.insert(itr,l ,r);
       for (auto itr = l1.begin(); itr!=l1.end(); itr++)
    {
        cout<<*itr<<"  ";
    }cout<<endl;
 
 // for deletion
     auto s_itr = l1.begin();
     advance(s_itr, 2); // s_itr is now pointing to 3rd element
     auto e_itr = l1.begin();
     advance(itr,4);

    l1.erase(s_itr,e_itr);
        for (auto itr = l1.begin(); itr!=l1.end(); itr++)
    {
        cout<<*itr<<"  ";
    }cout<<endl;
    
    
    return 0;
}