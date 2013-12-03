//David Strickland
//Faith Van Wig
//Class and Section: CS53 D
//Date: December 4, 2013
//Final Assignment, OOP, Bar people vs. Comic people

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <cstdlib>

using namespace std;

const int POCKET_SIZE = 20;

struct Product
{
  string m_name;
  float m_price;
};

class Customer
{
  private:
    Product m_things[POCKET_SIZE];
    int m_numThingsl;
    string m_name;
    int m_happiness;
    int m_store;
    float m_money;

  public:
    Customer();
    Customer(const string name, const float money, const int happiness,
             const int store);
    bool buy_stuff(const Business shop);
    string getName() const {return m_name;}
    float getMoney() const {return m_money;}
    float modMoney(const float money) {return m_money -= money;}
    float setMoney(const float money) {return m_money = money;}
    string setName(const string name) {return m_name = name;}
    int setPref(const int store) {return m_store = store;}
    void pelt(Customer victim);
    void steal(Customer victim);

  friend ostream& operator<< (ostream& out, const Customer& python);
};

#endif
