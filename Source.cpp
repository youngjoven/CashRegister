#include <iostream>
#include "cashRegister.h"
using namespace std;

void showSelection();
void sellProduct(dispenserType& product, cashRegister& pCounnter);
int main()
{
	cashRegister counter;
	dispenserType candy(100, 50);
	dispenserType chips(100, 65);
	dispenserType gum(75, 45);
	dispenserType cookies(100, 85);
	int choice;
	showSelection();
	cin >> choice;
	while (choice != 9)
	{
		switch (choice)
		{
		case 1: sellProduct(candy, counter);
			break;
		case 2: sellProduct(chips, counter);
			break;
		case 3: sellProduct(gum, counter);
			break;
		case 4: sellProduct(cookies, counter);
			break;
		default:
			cout << "Invalid selection" << endl;
		}
		showSelection();
		cin >> choice;
	}
	system("pause");
	return 0;
}
void showSelection()
{
	cout << "Welcome to Shelly's Candy Shop!!" << endl;
	cout << "1 for Candy" << endl;
	cout << "2 for Chips" << endl;
	cout << "3 for Gum" << endl;
	cout << "4 for Cookies" << endl;
	cout << "9 for Exit" << endl;
	cout << "To select an item, enter your choice: " << endl;
}
void sellProduct(dispenserType& product, cashRegister& pCounter)
{
	int amount;
	int amount2;
	if (product.getNoOfItems()>0)
	{
		amount = 0;
		do
		{
			amount2 = product.getCost() - amount;
			cout << "Please Deposit " << amount2 << " cents : " << endl;
			cin >> amount2;
			amount += amount2;
			if (amount<product.getCost())
				cout << "The amount is not enough." << endl;
		} while (amount < product.getCost());
		pCounter.acceptAmount(amount);
		product.makeSale();
		cout << "Collect your item at the bottom and enjoy" << endl;
	}
}