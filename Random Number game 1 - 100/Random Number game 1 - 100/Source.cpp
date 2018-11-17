// Author Zach Hirst 
// 4/20/18
// Random Number Generator 1-100

#include<iostream>
#include<time.h>
#include<iomanip>
#include<cstdlib>
#include<string>

int main()
{
	//variables
	int secret;
	int userNum;
	int num;
	int count = 1;
	//generator
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
			goto next;
			count = count + 1;
		}
	} while (count > 5);
next:
	std::cout << " Would you like to play again? \n 1 - For Yes \n 2 - For No " << std::endl; 
	std::cin >> num;
	if (num == 1)
	{
		goto again;
	}

	system("Pause");
	return 0;
}