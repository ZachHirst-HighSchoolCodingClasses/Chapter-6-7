// Author Zach Hirst 
// 4/19/18
// Random Number Generator higher or lower

#include<iostream>
#include<time.h>
#include<iomanip>
#include<cstdlib>
#include<string>

int main()
{
	int secret;
	int userNum;
	srand(time(NULL));
	secret = rand() % 10 + 1;

	again:
	std::cout << " Please guess a number between 1- 10 " << std::endl;
	std::cin >> userNum;
	if (userNum == secret)
	{
		std::cout << " Congratulations, you Win !! " << std::endl;
	}
	else if (userNum > secret)
	{
		std::cout << " The number you guessed is higher... guess again " << std::endl;
		goto again;
	}
	else if (userNum < secret)
	{
		std::cout << " The number you guessed is lower... guess again " << std::endl;
		goto again;
	}


	std::cout << secret << std::endl;

	system("Pause");
	return 0;
}