// Author Zach Hirst 
// 4/25/18
// Page 203 

#include<iostream>
#include<string>
#include<iomanip>

int main()
{
	std::string currency;
	double currencyChange, americanDollars;
	double dollar = 0.9813;
	double rupee = 52.53;
	double yen = 80.92;
	double euro = 0.757;
	double peso = 13.1544;
	double rand = 7.7522;
	double pound = 0.6178;


	std::cout << " Currency Exchange Machine " << std::endl;
	std::cout << " Please enter which currency you would like to transfer too: " << std::endl;
	begin:
	std::cout << " Euro \n Canadian [Dollar] \n Indian [Rupee] \n Japanese [Yen] \n Mexican [Peso] \n South African [Rand] \n British [Pound] " << std::endl;
	std::cin >> currency;
	if (currency == "Dollar")
	{
		std::cout << " You chose Canadian dollar " << std::endl;
		std::cout << " Please enter how much money you have in U.S. dollars XX.xx " << std::endl;
		std::cin >> americanDollars;
		currencyChange = dollar * americanDollars;
		std::cout << std::setprecision(4) << currencyChange << " Canadian Dollars " << std::endl;
	}
	else if (currency == "Rupee")
	{
		std::cout << " You chose Indian Rupee " << std::endl;
		std::cout << " Please enter how much money you have in U.S. dollars XX.xx " << std::endl;
		std::cin >> americanDollars;
		currencyChange = rupee * americanDollars;
		std::cout << std::setprecision(4) << currencyChange << " Indian Rupee " << std::endl;
	}
	else if (currency == "Yen")
	{
		std::cout << " You chose Japanese Yen " << std::endl;
		std::cout << " Please enter how much money you have in U.S. dollars XX.xx " << std::endl;
		std::cin >> americanDollars;
		currencyChange = yen * americanDollars;
		std::cout << std::setprecision(4) << currencyChange << " Japanese Yen " << std::endl;
	}
	else if (currency == "Euro")
	{
		std::cout << " You chose the Euro " << std::endl;
		std::cout << " Please enter how much money you have in U.S. dollars XX.xx " << std::endl;
		std::cin >> americanDollars;
		currencyChange = euro * americanDollars;
		std::cout << std::setprecision(4) << currencyChange << " Euro's " << std::endl;
	}
	else if (currency == "Peso")
	{
		std::cout << " You chose Mexican Peso " << std::endl;
		std::cout << " Please enter how much money you have in U.S. dollars XX.xx " << std::endl;
		std::cin >> americanDollars;
		currencyChange = peso * americanDollars;
		std::cout << std::setprecision(4) << currencyChange << " Mexican Peso " << std::endl;
	}
	else if (currency == "Rand")
	{
		std::cout << " You chose South African Rand " << std::endl;
		std::cout << " Please enter how much money you have in U.S. dollars XX.xx " << std::endl;
		std::cin >> americanDollars;
		currencyChange = rand * americanDollars;
		std::cout << std::setprecision(4) << currencyChange << " South African Rand " << std::endl;
	}
	else if (currency == "Pound")
	{
		std::cout << " You chose British Pound " << std::endl;
		std::cout << " Please enter how much money you have in U.S. dollars XX.xx " << std::endl;
		std::cin >> americanDollars;
		currencyChange = pound * americanDollars;
		std::cout << std::setprecision(4) << currencyChange << " British Pound " << std::endl;
	}
	else 
	{
		std::cout << " What you entered was invalid... Try again " << std::endl;
		goto begin;
	}

	system("Pause");
	return 0;
}