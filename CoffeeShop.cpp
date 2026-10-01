#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to our Coffeeshop!\n";

	cout << "What is your first name?";
	string FirstName;
	cin >> FirstName;

	cout << "Welcome ";
	cout << FirstName;
	cout << "\n";

	cout << "How many coffees? ";
	int AmtCoffees;
	cin >> AmtCoffees;

	cout << "How many bagels? ";
	int AmtBagels;
	cin >> AmtBagels;

	cout << "How many donuts? ";
	int AmtDonuts;
	cin >> AmtDonuts;

	double CoffeePrice = 2.50;
	double BagelPrice = 1.75;
	double DonutPrice = 1.00;

	double Subtotal = (AmtCoffees * CoffeePrice) + (AmtBagels * BagelPrice) + (AmtDonuts * DonutPrice);

	double Tax = Subtotal * 0.085;

	double Total = Subtotal + Tax;

	cout << "How much will you pay?";
	double AmtPaid;
	cin >> AmtPaid;

	double Change = (AmtPaid - Total);

	cout << "Receipt for Customer: " << FirstName << endl;
	cout << "Coffees: " << AmtCoffees << endl;
	cout << "Bagels: " << AmtBagels << endl;
	cout << "Donuts: " << AmtDonuts << endl;
	cout << "Total is: $" << Total << endl;
	cout << "Your Change is: $" << Change << endl;

	return 0;
}

// Program welcomes the user to the coffeeshop with a message and asks them for their name
// The Program says Welcome ____ (their name) then asks them how many of each item while storing it as a variable
// The Program initializes the prices of all items then multiplies it by amount of each item the user wants
// The program then calculates the total by taking that subtotal and adding a 8.5% sales tax
// The program asks the user how much cash they are using to pay then it calculates the change to give back to them.
// It then prints a receipt with all the information previously discussed on it
