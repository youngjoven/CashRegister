#include "cashRegister.h"
#include <iostream>
using namespace std;

int cashRegister::getCurrentBalance() const
{
	return cashOnHand;
}
void cashRegister::acceptAmount(int amountIn)
{
	cashRegister::cashOnHand + amountIn;
}
cashRegister::cashRegister(int cashIn)
{
	if (cashIn >= 0)
		cashOnHand = cashIn;
	else
		cashOnHand = 500;
}
int dispenserType::getNoOfItems() const
{
	return numberOfItems;
}
int dispenserType::getCost() const
{
	return cost;
}
void dispenserType::makeSale()
{
	numberOfItems--;
}
dispenserType::dispenserType(int setNoOfItems, int setcost)
{
	if (setNoOfItems >= 0)
		numberOfItems = setNoOfItems;
	else
		numberOfItems = 50;
	if (setcost >= 0)
		cost = setcost;
	else
		cost = 50;
}