//David Strickland
//Faith Van Wig
//Class and Section: CS53 D
//Date: December 4, 2013
//Final Assignment, OOP, Bar people vs. Comic people

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "customer.h"

using namespace std;

Customer::Customer()
:m_numThings (0)
{
  srand(time(NULL));
  m_happiness = rand % 101;
  m_money = static_cast <float> (rand % 10001) / 100.00;
}

Customer::Customer(const string name, const float money, const int happiness, const int
         store)
:m_numThings (0), m_name (name), m_happiness (happiness), m_store (store),
 m_money (money) {}

bool Customer::buy_stuff(product & items[])
{
  int chance, item;
  bool buy, confirm;

  chance = rand % 101;

  if (chance < 50)
     buy = true;
  else if (chance >= 50)
     buy = false;

  if (buy == true)
  {
    item = rand % 7;
    
    //open certain stream
    //gitline 
    //add that item to array items
    //in bus.cpp call buy_stuff() and access items[] 
    
    
    if (shop.m_purchase[item].m_price <= m_money)
    {
      m_happiness += 15;
      modMoney(-shop.m_purchase[item].m_price);
      m_things[m_numThings] = shop.m_purchase[item];
      m_numThings++;
      confirm = true;
    }
    else
    {
      m_happiness -= 10;
      confirm = false;
    }
  }

  else
    m_happiness -= 10;

  return confirm;
}

void Customer::pelt(Customer victim)
{
  if (m_numThings == 0)
  {
    m_happiness -= 25;
  }

  else
  {
    m_happiness += 5;
    victim.m_happiness -= 20;
    m_things[m_numThings] = 0;
    m_numThings--;
  }

  return;
}

void Customer::steal(Customer victim)
{
  if (victim.m_numThings == 0)
    m_happiness -= 5;
  else if (victim.m_numThings != 0 && m_numThings < (POCKET_SIZE - 1))
  {
    m_happiness += 25;
    victim.m_numThings -= 20;
    m_things[m_numThings] = victim.m_things[victim.m_numThings];
    m_numThings++;
    victim.m_numThings--;
  }

  else if (victim.m_numThings != 0 && m_numThings >= (POCKET_SIZE - 1))
    m_happiness -= 5;

  return;
}

ostream& operator<< (ostream& out, const Customer& python)
{
  out << python.m_name << " has $" << python.m_money << " and purchases: ";
  if (python.m_numThings == 0)
    out << "none";
  for (int i = 0; i < python.m_numThings; i++)
  {
    cout << python.m_things[i] << ((i < python.m_numThings - 1)? ", " : "");
  }
  cout << endl;
  return out;
}

