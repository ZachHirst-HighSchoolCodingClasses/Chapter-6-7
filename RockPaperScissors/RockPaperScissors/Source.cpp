// Author Zach Hirst
// 4/29/18
// Rock Paper Scissors
//Create a game where the user inputs one of three variables and the computer randomly generates one of the three as well. 
//Display winner, loser, or tie. Ask the user if they would like to play again and display the record for the user and the computer.

#include<iostream>
#include<string>
#include<time.h>
#include<iomanip>
#include<cstdlib>

using namespace std;

std::string userinput, computerChoice, playChoice;

double computerNum, computerChoiceNum;

int randomNumGen()
{
	srand(time(NULL));
	computerNum = rand() % 3 + 1;
	if (computerChoiceNum == 1)
	{
		computerChoice = "Rock";
	}
	else if (computerChoiceNum == 2)
	{
		computerChoice = "Paper";
	}
	else if (computerChoiceNum == 3)
	{
		computerChoice = "Scissors";
	}
	return 0;
}

int main()
{
	again:
	cout << " Please enter either Rock, Paper, or Scissors " << endl;
	cin >> userinput;

	randomNumGen();

	if (userinput == "Rock" || userinput == "rock")
	{
		cout << " You have chosen Rock " << endl;
		if (userinput == "Rock" && computerChoice == "Rock")
		{
			cout << " Awwee you tied with the computer, that sucks " << endl;
		}
		else if (userinput == "Rock" && computerChoice == "Paper")
		{
			cout << "Hahaha LOSER, you lose!  " << endl;
		}
		else if (userinput == "Rock" && computerChoice == "Scissors")
		{
			cout << "Damn, you won....  " << endl;
		}
	}
	else if (userinput == "Paper" || userinput == "paper")
	{
		cout << " You have chosen Paper " << endl;
		if (userinput == "Paper" && computerChoice == "Rock")
		{
			cout << "Damn, you won....  " << endl;
		}
		else if (userinput == "Paper" && computerChoice == "Paper")
		{
			cout << " Awwee you tied with the computer, that sucks " << endl;
		}
		else if (userinput == "Paper" && computerChoice == "Scissors")
		{
			cout << "Hahaha LOSER, you lose!  " << endl;
		}
	}
	else if (userinput == "Scissors" || userinput == "scissors")
	{
		cout << " You have chosen Scissors " << endl;
		if (userinput == "Scissors" && computerChoice == "Rock")
		{
			cout << "Hahaha LOSER, you lose!  " << endl;
		}
		else if (userinput == "Scissors" && computerChoice == "Paper")
		{
			cout << "Damn, you won....  " << endl;
		}
		else if (userinput == "Scissors" && computerChoice == "Scissors")
		{
			cout << " Awwee you tied with the computer, that sucks " << endl;
		}
	}

	cout << " Would you like to play again? " << endl;
	cin >> playChoice;
	if (playChoice == "Yes" || playChoice == "yes")
	{
		goto again;
	}
	system("Pause");
	return 0;
}