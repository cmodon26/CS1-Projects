//Cade Modon

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a month number: ";
	int UserMonthNum;
	cin >> UserMonthNum;
	
	if (UserMonthNum < 1 || UserMonthNum > 12)
		cout << "Invalid month. Enter number 1-12";
	else
	{
		if(UserMonthNum == 12 || UserMonthNum == 1 || UserMonthNum == 2)
			cout << "It is Winter\n";
		if(UserMonthNum == 3 || UserMonthNum == 4 || UserMonthNum == 5)
			cout << "It is Spring\n";
		 if(UserMonthNum == 6 || UserMonthNum == 7 || UserMonthNum == 8)
                        cout << "It is Summer\n";
		 if(UserMonthNum == 9 || UserMonthNum == 10 || UserMonthNum == 11)
                        cout << "It is Fall\n";
	}	

	return 0;
}

//Program asks the user to input a month number (1 to 12) and if they don't it gives them an error
//UserMonthNum variable determines which season it is (3 to 5 is spring, 6 to 8 is summer, ect)
