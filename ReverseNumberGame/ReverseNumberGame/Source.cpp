// Author Zach Hirst
// 4/26/18
// Reverse Number Game

#include<iostream>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

double userNum, compGuess, counter, userentry;

int compNum()
{
	do {
		
		srand(time(NULL));

		compGuess = (rand() % 100 + 1);

		counter = counter + 1;
	} while (counter < 6 );
	return 0;
}

int main()
{
	retry:
	cout << " Please enter a number to play against the computer sumulation.  \n 1 - 100 Please " << endl;
	cin >> userNum;
	if (userNum > 100)
	{
		cout << " The number you have entered is invalid, please enter a valid number.. " << endl;
		goto retry;
	}

	compNum();

	if (compGuess != userNum)
	{
		cout << " Congratulations, you win! " << endl;
		cout << " Your guess was " << userNum << endl;
		cout << " The computer's guess was " << compGuess << endl;
	}
	else if (userNum = compGuess)
	{
		cout << " I'm sorry the computer guessed your number, YOU LOSE " << endl;
		cout << " Your guess was " << userNum << endl;
		cout << " The computer's guess was " << compGuess << endl;
	}
	
	cout << " Would you like to play again? \n 1 - For Yes \n 2 - For No " << std::endl;
	cin >> userentry;
	if (userentry == 1)
	{
		goto retry;
	}

	system("Pause");
	return 0;
}