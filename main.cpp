//David Strickkland
//Faith Van Wig
//Class and Section: CS53 D
//Date: December 4, 2013
//Final Assingment, OOP, Bar people vs. Comic People

#include <fstream>
#include "business.h"


main.cpp
{
  Customer people[PEOPLE];
  Business bar("bar"), comicShop("Comic Book Shop");
  
  string tempName;
  int tempNum, numPeople, numRounds;
  float cost;
  ifstream fin, moeSet, comicSet;
  
  //inits the People
  
  fin.open("people.txt");
  while(fin.good())
  {
    for(int i = 0; i < PEOPLE; i++)
    {
      getline(fin,tempName, ',');
      people[i].setName(tempName);
      getline(fin, tempNum, '\n');
      people[i].setPref(tempNum);
    }
  };
  fin.close();
  
  //inits the Products for the businesses
  
  moeSet.open("Moe_items.txt");
  while(moeSet.good());
  {
    for(int i = 0; i < (NUM_OF_ITEMS - 1); i++)
    {
      getline(moeSet, cost, ' ');
      bar.m_items[i].m_price = cost;
      getline(moeSet, tempName, '\n');
      bar.m_items[i].m_name = tempName;
    }
  };
  moeSet.close();
  
  comicSet.open("CBS_items.txt");
  while(comicSet.good())
  {
    for(int i = 0; i < (NUM_OF_ITEMS - 1); i++)
    {
      getline(moeSet, cost, ' ');
      comicShop.m_items[i].m_price = cost;
      getline(moeSet, tempName, '\n');
      comicShop.m_items[i].m_name = tempName;
    }
  };
  comicSet.close();
  
  while(numPeople > 1 && numRounds <= 20)
  {
    for(int i = 0; i < numPeople; i++)
    {
      if(people.m_store == 1)
        comicShop.addCustomer(people[i]);
      else
        bar.addCustomer(people[i]);
    }
  
    //for loop in the sell stuff function
    bar.sell_stuff();
    comicShop.sell_stuff();
    
    comicShop.customers_leave(people[], numPeople);
    bar.customers_leave(people[], numPeople);
    
    for(int i = 0; i < numPeople; i++)
    {
      tempNum = rand() % 20;
      if (i = tempNum)
      else
        if (people[i].m_shop == people[tempNum].m_shop)  
          steal(people[tempNum]);
        else 
          pelt(people[tempNum]);
    }
    
    for(int i = 0; i < numPeople; i++)
    {
      cout << people[i];
    }
  }; 

  return 0;
}
