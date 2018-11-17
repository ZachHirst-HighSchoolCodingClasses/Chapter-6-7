// Author Zach Hirst
// 4/19/18
//Switch Statement 

#include<iostream>
#include<string>

int main()
{
	int bookScanID = 0;
	std::string bookOwner;

	std::cout << " Book ID number please enter here " << std::endl;
	std::cin >> bookScanID;

	switch (bookScanID)
	{
	case 311478:
		bookOwner = "Mr. Anderson";
		break;
	case 277343:
		bookOwner = "Aaron";
		break;
	case 1234567:
		bookOwner = "John Cena";
	default:
		bookOwner = "Invalid";
		break;
	}
	if (bookOwner == "Invalid")
	{
		std::cout << "Invalid" << std::endl;
	}
	else
		std::cout << bookOwner << std::endl;


	system("Pause");
	return 0;
}