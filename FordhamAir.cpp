//Cade Modon

#include <iostream>
#include <string>

using namespace std;



int main()
{
	char destination;
	double ticketPrice;
	int flightTime;
	bool isWeekend;
	bool isDayflight;
	char weekEndOrWeekDayLetter;
	int numTickets;
	double totalCost;
	double userPayment;
	double change;	

	cout << "Welcome to Fordham Airlines!" << endl;

	cout << "What is your destination? ([C]hicago, [M]iami, [P]ortland) ";
	cin >> destination;

	cout << "What time will you travel? (Enter time between 0-2359) ";
	cin >> flightTime;

	if (flightTime >= 500 && flightTime <= 1900)
	{
		isDayflight = true;
	}
	else
	{
		isDayflight = false;
	}

	cout << "What type of day are you traveling? (week[E]nd or week[D]ay) ";
	cin >> weekEndOrWeekDayLetter;

	if (weekEndOrWeekDayLetter == 'E')
	{
		isWeekend = true;
	}
	else
	{
		isWeekend = false;
	}

	if (isDayflight == true && isWeekend == false)
	{
    		ticketPrice = 75;
	}
	else if (isDayflight == false && isWeekend == false)
	{
	       	ticketPrice = 50;
	}
	else if (isDayflight == true && isWeekend == true)
	{
   		 ticketPrice = 90;
	}
	else if (isDayflight == false && isWeekend == true)
	{
   		 ticketPrice = 60;
	}
	
	if (destination == 'M')
	{
		ticketPrice = ticketPrice * 2;
	}

	if (destination == 'P')
	{
		ticketPrice = ticketPrice * 4;
	}
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);	

	cout << "Each ticket will cost: $" << ticketPrice << endl;

	cout << "How many tickets do you want? ";
	cin >> numTickets;

	if (numTickets < 0)
	{
		cout << "The number of tickets ordered is invalid, the order has been canceled." << endl;
		return 0;
	}

	totalCost = ticketPrice * numTickets;	
	
	cout << "You owe: $" << totalCost << endl;

	cout << "Amount paid? ";
	cin >> userPayment;

	if (userPayment < totalCost)
	{
		cout << "That is too little! No tickets ordered.";
		return 0;
	}

	change = userPayment - totalCost;
	cout << "You will get in change: $" << change << endl;

	cout << "Your tickets have been ordered!" << endl;	

}

