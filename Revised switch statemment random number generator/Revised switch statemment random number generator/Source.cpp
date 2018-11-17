// Author Zach Hirst
// 4/24/18
// Random number generator with 3 levels

#include<iostream>
#include<time.h>
#include<iomanip>
#include<cstdlib>
#include<string>

int main()
{
	int level;

	std::cout << " NUmber generator with levels: Please pick a level.. " << std::endl;
	begin:
	std::cout << " Level 1 - Level 2 - Level 3 " << std::endl;
	std::cout << " Please enter a 1 , 2 , or 3 .. Depending on desired level " << std::endl;
	std::cin >> level;
	switch (level)
	{
	case 1:
	{
		int secret;
		int count = 1;
		int userNum;
		srand(time(NULL));
		secret = rand() % 10 + 1;
		do {
			std::cout << " Please guess a number between 1- 10 " << std::endl;
			std::cin >> userNum;
			if (userNum == secret)
			{
				std::cout << " Congratulations, you Win !! " << std::endl;
			}
			else if (userNum > secret)
			{
				std::cout << " The number you guessed is higher... guess again " << std::endl;
				count = count + 1;
			}
			else if (userNum < secret)
			{
				std::cout << " The number you guessed is lower... guess again " << std::endl;
				count = count + 1;
			}
		} while (count < 6);
	}
	break;
	case 2:
	{
		int secret;
		int count = 1;
		int userNum;
		srand(time(NULL));
		secret = rand() % 100 + 1;
		do {
			std::cout << " Please guess a number between 1- 100 " << std::endl;
			std::cin >> userNum;
			if (userNum == secret)
			{
				std::cout << " Congratulations, you Win !! " << std::endl;
				goto end;
			}
			else if (userNum > secret)
			{
				std::cout << " The number you guessed is higher... guess again " << std::endl;
				count = count + 1;
			}
			else if (userNum < secret)
			{
				std::cout << " The number you guessed is lower... guess again " << std::endl;
				count = count + 1;
			}
		} while (count < 6);
		end:
	}
	break;
	case 3:
	{
		int secret;
		int count = 1;
		int userNum;
		srand(time(NULL));
		secret = rand() % 1000 + 1;
		do {
			std::cout << " Please guess a number between 1- 1000 " << std::endl;
			std::cin >> userNum;
			if (userNum == secret)
			{
				std::cout << " Congratulations, you Win !! " << std::endl;
			}
			else if (userNum > secret)
			{
				std::cout << " The number you guessed is higher... guess again " << std::endl;
				count = count + 1;
			}
			else if (userNum < secret)
			{
				std::cout << " The number you guessed is lower... guess again " << std::endl;
				count = count + 1;
			}
		} while (count < 6);
	}
	break;
	default:
	{
		int again;

		std::cout << " Would you like to play again? \n 1 - yes \n 2 - no " << std::endl;
		std::cin >> again;
		if (again == 1)
		{
			goto begin;
		}
	}



	}
	system("Pause");

	return 0;
}