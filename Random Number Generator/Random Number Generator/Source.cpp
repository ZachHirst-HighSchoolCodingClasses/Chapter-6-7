// Author Zach Hirst 
// 4/19/18
// Random Number Generator

#include<iostream>
#include<time.h>
#include<iomanip>
#include<cstdlib>
#include<string>

int main()
{
	int num;

	srand(time(NULL));

	num = rand() % 10 + 1;

	std::cout << num << std::endl;



	system("Pause");
	return 0;
}