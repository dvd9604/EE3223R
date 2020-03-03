#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
using namespace std;

class ShoppingCart
{

public:
  // default constructor
  ShoppingCart();

  // setters/mutators
  void SetName(string name);
  void SetPrice(int price);
  void SetQuantity(int quantity);

  // getters/accessors
  string GetName() const;
  int GetPrice() const;
  int GetQuantity() const;

  // member items
private:
  string itemName;
  int itemPrice;
  int itemQuantity;
};

#endif