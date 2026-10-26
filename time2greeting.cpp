// Cade Modon

#include <iostream>
#include <string>

using namespace std;

string time2greeting(int militaryTime) // takes military time and returns the proper greeting based on the time of the day
{
	if ((militaryTime == 0) || (militaryTime > 2400) || (militaryTime < 0) || (militaryTime % 100 > 59)) // this is an illegal time
		return "That is an illegal time";
	
	else if ((militaryTime >= 400) && (militaryTime < 1200)) // 4am to before noon case
	{
		return "Good Morning";
	}

	else if ((militaryTime >= 1200) && (militaryTime < 1700)) // noon to before 5pm case
        {
                return "Good Afternoon";
        }

	else if ((militaryTime >= 1700) && (militaryTime < 2300)) // 5pm to before 11pm case
        {
                return "Good Evening";
        }

	else  // 11pm to 4am case
        {
                return "What are you doing up";
        }
}

int main() // running the main loop to pull it all together into the prompt and response model
{
	string userName;
	int time;
	string greeting;

	cout << "What is your name? ";
	cin >> userName;

	cout << "What time is it? (0-2400)";
	cin >> time;

	greeting = time2greeting(time);

	cout << greeting << ", " << userName << endl;

	return 0;
}
