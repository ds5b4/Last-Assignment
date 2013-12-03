//David Strickland
//Faith Van Wig
//Class and Section: CS53 D
//Date: December 4, 2013
//Final Assignment, OOP, Bar people vs. Comic people

#include "cust.h"
#include <iostream>
#include <cstring>

using namespace std;

const int NUM_OF_ITEMS = 8
const int NUM_OF_CUSTS = 12

class Business
{
  private:
    Product m_items[NUM_OF_ITEMS];
    string m_name;
    Customer m_custs[NUM_OF_CUSTS];
    int m_sizeCusts;
  public:
    Business(const string name):string m_name = name,
    //Desc: adds customer into business
    //Pre: none
    //Post: adds cusomtomer into busness
    addCustomer(Customer c){m_sizeCusts++; return;}
    //Desc:
    //Pre:
    //Post:
    sell_stuff()
    //Desc:
    //Pre:
    //Post:
    customers_leave(Customer custs[], int numOfCusts);
};

#endif

