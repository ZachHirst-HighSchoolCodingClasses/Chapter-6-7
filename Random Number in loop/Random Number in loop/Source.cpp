// Author Zach Hirst 
// 4/24/18
// Random number through loop 

#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
#include<string>

int main()
{
	int count = 1;
	int num;

	do
	{
		srand(time(NULL));

		num = rand() % 10 + 1;

		std::cout << num << std::endl;

		count = count + 1;

	} while (count < 11);


	system("Pause");
	return 0;
}