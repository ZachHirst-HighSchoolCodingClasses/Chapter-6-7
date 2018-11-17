// Author Zach Hirst 
// 4/24/18
// 4.5

#include<iostream>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
#include<string>



int level1()
{
	int secret;
	int userNum;
	int num;
	int count = 1;
	int r;

	srand(time(NULL));
	secret = rand() % 10 + 1;
	do{
	again:
		std::cout << " Please enter a mumber btween 1 - 10 " << std::endl;
		std::cin >> userNum;
		if (userNum > secret)
		{
			std::cout << " Your number is to high, please try again. " << std::endl;
			goto again;
			count = count + 1;
		}
		else if (userNum < secret)
		{
			std::cout << " Your number is to low, please try again. " << std::endl;
			goto again;
			count = count + 1;
		}
		else if (userNum == secret)
		{
			std::cout << " Congratulations you win!!! " << std::endl;
		
			count = count + 1;
		}
	} while (count > 5);
	return r;
	
}
int level2()
{
	int secret;
	int userNum;
	int num;
	int count = 1;
	int r;

	srand(time(NULL));
	secret = rand() % 100 + 1;
	do{
	again:
		std::cout << " Please enter a mumber btween 1 - 100 " << std::endl;
		std::cin >> userNum;
		if (userNum > secret)
		{
			std::cout << " Your number is to high, please try again. " << std::endl;
			goto again;
			count = count + 1;
		}
		else if (userNum < secret)
		{
			std::cout << " Your number is to low, please try again. " << std::endl;
			goto again;
			count = count + 1;
		}
		else if (userNum == secret)
		{
			std::cout << " Congratulations you win!!! " << std::endl;

			count = count + 1;
		}
	} while (count > 5);
	return r;
}
int level3()
{
	int secret;
	int userNum;
	int num;
	int count = 1;
	int r;

	srand(time(NULL));
	secret = rand() % 1000 + 1;
	do{
	again:
		std::cout << " Please enter a mumber btween 1 - 1000 " << std::endl;
		std::cin >> userNum;
		if (userNum > secret)
		{
			std::cout << " Your number is to high, please try again. " << std::endl;
			goto again;
			count = count + 1;
		}
		else if (userNum < secret)
		{
			std::cout << " Your number is to low, please try again. " << std::endl;
			goto again;
			count = count + 1;
		}
		else if (userNum == secret)
		{
			std::cout << " Congratulations you win!!! " << std::endl;

			count = count + 1;
		}
	} while (count > 5);
	return r;
}

int main()
{
	int levelChoice;
	std::string playAgain;

	do
	{
	std::cout << " Welcome to the number game, please pick a difficulty " << std::endl;
	std::cout << " Level 1 // Level 2 // Level 3 " << std::endl;
	std::cout << " Remeber your choice is being judged " << std::endl;
	std::cin >> levelChoice;
	switch (levelChoice)
	{
	case 1:
		level1();
		break;
	case 2:
		level2();
		break;
	case 3:
		level3();
		break;
	default:
		levelChoice > 4;
	}
	std::cout << " Would you like to play again? " << std::endl;
	std::cin >> playAgain;
	} while (playAgain == "yes");
	
	std::cout << "Thanks for playing." << std::endl;

	system("Pause");
	return 0;
}