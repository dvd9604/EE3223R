#include <iostream>
using namespace std;

#include "ShoppingCart.h"

int main()
{

  // placeholder values for cin
  string curName;
  int curPrice;
  int curQuantity;

  // try to do this with a for loop on your own

  // item 1 grab and store

  cout << "Enter the name of the item: ";
  cin >> curName;
  cout << "Enter the price of the item: ";
  cin >> curPrice;
  cout << "Enter the quantity of the item: ";
  cin >> curQuantity;

  // first shoppingCart item
  ShoppingCart itemA;

  itemA.SetName(curName);
  itemA.SetPrice(curPrice);
  itemA.SetQuantity(curQuantity);

  // item 1 grab and store

  cout << "Enter the name of the item: ";
  cin >> curName;
  cout << "Enter the price of the item: ";
  cin >> curPrice;
  cout << "Enter the quantity of the item: ";
  cin >> curQuantity;

  // second shoppingCart item
  ShoppingCart itemB;

  itemB.SetName(curName);
  itemB.SetPrice(curPrice);
  itemB.SetQuantity(curQuantity);

  int total = (itemA.GetPrice() * itemA.GetQuantity()) + (itemB.GetPrice() * itemB.GetQuantity());

  cout << itemA.GetName() << " " << itemA.GetQuantity() << "@" << itemA.GetPrice() << endl;
  cout << itemB.GetName() << " " << itemB.GetQuantity() << "@" << itemB.GetPrice() << endl;
  cout << "Total: $" << total << endl;

  return 0;
}