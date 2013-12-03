//Name: Faith Van Wig
//Name: David Strickland
//Class and Section: CS53 D
//Date: November 24, 2013
//

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <cstdlib>

using namespace std;

const int POCKET_SIZE = 20;

struct Product
{

class Customer
{
  private:
    Product m_things[POCKET_SIZE];
    int m_numThings
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
    float modMoney(const float money) {return m_money += money;}
    float setMoney(const float money) {return m_money = money;}
    string setName(const string name) {return m_name = name;}
    int setPref(const int store) {return m_store = store;}
    void pelt(Customer victim);
    void steal(Customer victim);

  friend ostream& operator<< (ostream& out, const Customer& python);
};

#endif
