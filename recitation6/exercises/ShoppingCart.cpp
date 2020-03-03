#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;

  return;
}

void ShoppingCart::SetName(string name)
{
  itemName = name;

  return;
}

void ShoppingCart::SetPrice(int price)
{
  itemPrice = price;

  return;
}

void ShoppingCart::SetQuantity(int quantity)
{
  itemQuantity = quantity;

  return;
}

string ShoppingCart::GetName() const
{
  return itemName;
}

int ShoppingCart::GetPrice() const
{
  return itemPrice;
}

int ShoppingCart::GetQuantity() const
{
  return itemQuantity;
}
