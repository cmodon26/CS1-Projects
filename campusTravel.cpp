// Cade Modon
// campusTravel.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int turnsRemaining = 4;
	int distanceRemaining = 14;
	int travelOption;
	bool showStatus = true;

	// initialize all variables that will be used throughout the code: how many turns remaining, distance remaining, which option the user chooses (1-3), and the flag for if the 
	// "you are x miles from campus" line prints 

	while (turnsRemaining > 0 && distanceRemaining > 0)
	{
		if (showStatus)
		{
			cout << "You are " << distanceRemaining << " mile(s) from campus!" << " You have " << turnsRemaining << " turns remaining" << endl;
		}
		
		cout << "Travel by:" << endl;
		cout << "[1]Bus = 2 miles, [2]Subway = 5 miles, [3]Jetpack = 10 miles" << endl;
	
	// this message inroduces the user to the program and gives them their options to proceed

		cout << "How do you wish to travel? ";
		cin >> travelOption;

		if (travelOption == 1)
		{
			distanceRemaining = distanceRemaining - 2;
			turnsRemaining = turnsRemaining - 1;
			showStatus = true;
		}

		else if (travelOption == 2)
		{
			distanceRemaining = distanceRemaining - 5;
			turnsRemaining = turnsRemaining - 1;
			showStatus = true;
		}

		else if (travelOption == 3)
		{
			distanceRemaining = distanceRemaining - 10;
			turnsRemaining = turnsRemaining - 1;
			showStatus = true;
		}
		else
		{
			cout << "Invalid choice, try again!" << endl;
			showStatus = false;
		}
		
	}

	cout << endl;

	// the previous block handles how many miles are gained towards campus when each option is selected

	if (distanceRemaining == 0)
	{
		cout << "You landed exactly!" << endl;
		cout << "You won!" << endl;
	}	
	else if (distanceRemaining > 0)
	{
		cout << "You were short of campus by " << distanceRemaining << " miles!" << endl;
		cout << "You lose!" << endl;
	}
	else
	{
		cout << "You over-shot campus by " << -distanceRemaining << " miles!" << endl;
		cout << "You lose!" << endl;
	}

	// this block handles the win conditions and message for when the game concludes

	return 0;

}
