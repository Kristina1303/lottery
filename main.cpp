#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	srand(time(0));

	int lottery = rand() % 900 + 100;
	cout << "Enter your lottery number(3 digits)" << endl;
	int guess = 0;
	cin >> guess;
	int gdigit1 = guess / 100;
	int gdigit2 = (guess % 100) / 10;
	int gdigit3 = (guess % 10) % 10;

	int ldigit1 = lottery / 100;// 123/100=1, (123%100)/10;=2; (12%100)%10=3
	int ldigit2 = (lottery % 100) / 10;
	int ldigit3 = (lottery % 100) % 10;
	if (guess == lottery)
	{
		cout << "You guested the number. You win 10 000$ " << endl;

	}
	else if ((gdigit1 == ldigit1 or gdigit1 == ldigit2 or gdigit1 == ldigit3) & (gdigit2 == ldigit1 or gdigit2 == ldigit2 or gdigit2 == ldigit3) & (gdigit3 == ldigit1 or gdigit3 == ldigit2 or gdigit3 == ldigit3))
	{
		cout << "You guessted all digits. You win 3 000$" << endl;
	}
	else if ((gdigit1 == ldigit2 or gdigit1 == ldigit1 or gdigit1 == ldigit3) & (gdigit2 == ldigit1 or gdigit2 == ldigit2 or gdigit2 == ldigit3))
	{
		cout << "You guessted 2 digits. You win 2 000$" << endl;
	}
	else if ((gdigit1 == ldigit2 or gdigit1 == ldigit1 or gdigit1 == ldigit3) & (gdigit3 == ldigit1 or gdigit3 == ldigit2 or gdigit3 == ldigit3))
	{
		cout << "You guessted 2 digits. You win 2 000$" << endl;
	}
	else if ((gdigit2 == ldigit2 or gdigit2 == ldigit1 or gdigit2 == ldigit3) & (gdigit3 == ldigit1 or gdigit3 == ldigit2 or gdigit3 == ldigit3))
	{
		cout << "You guessted 2 digits. You win 2 000$" << endl;
	}
	else if (gdigit1 == ldigit1 or gdigit1 == ldigit2 or gdigit1 == ldigit3 or gdigit2 == ldigit1 or gdigit2 == ldigit2 or gdigit2 == ldigit3 or gdigit3 == ldigit1 or gdigit3 == ldigit2 or gdigit3 == ldigit3)
	{
		cout << "You guessted 1 digit. You win 1000$" << endl;
	}
	else
	{
		cout << "You didn't guessted anything.Sorry!" << endl;
	}
	return 0;
}