#include <iostream>

#include <string>

using namespace std;

int main()
{
    int month;

    cout << "Enter a month number: ";
    cin >> month;

    switch(month)
    {
        case 12:
        case 1:
        case 2:
            cout << "It is Winter\n";
            break;

        case 3:
        case 4:
        case 5:
            cout << "It is Spring\n";
            break;

        case 6:
        case 7:
        case 8:
            cout << "It is Summer\n";
            break;

        case 9:
        case 10:
        case 11:
            cout << "It is Fall\n";
            break;

        default:
            cout << "Invalid month. Enter number 1-12\n";
            break;
    }

    return 0;
}
