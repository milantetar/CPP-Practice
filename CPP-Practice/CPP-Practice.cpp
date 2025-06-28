// CPP-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void refswap(std::string &x, std::string &y);
int searchFood(std::string foods[], int size, std::string element);
void Ascending(double arr[], int size);
void Descending(double arr[], int size);
int main()

{
	// Null pointer example
	int *ptr = nullptr;
	int ex = 123;
	
	ptr = &ex;

	if (ptr == nullptr)
	{
		std::cout << "not assigned an adderess." << std::endl;
		std::cout << *ptr <<std::endl;
	}
	else
	{
		std::cout << "assigned an adderess successfully." << std::endl;
	}

	// pointer example
	std::string name = "Bro";
	int manage = 21;

	std::string freepizzas[5] = { "pizza1","pizza2","pizza3","pizza4","pizza5"};
	std::string *pfreepizzas = freepizzas;

	std::string *pName = &name;
	int* pAge = &manage;
	std::cout << *pName << std::endl;
	std::cout << *pAge << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
	std::cout << *pfreepizzas << std::endl;
	}

	// Pass by value and pass by refrence
	std::string x = "kool-Aid";
	std::string y = "unkool-Aid";
	refswap(x,y);
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	system("pause");
	system("cls");
	
	// Memory address = a location in memory where data is stored
	
	std::string Stuname = "Vidhi";
	int age = 21;
	bool student = true;

	std::cout << &Stuname << std::endl;
	std::cout << Stuname << std::endl;


	system("pause");
	system("cls");
	// Quiz game
	std::string questions[] = { "1. What is your body count",
								"2. Where is perry the playtipus",
								"3. what is your crush domain" };

	std::string options[][4] = {{"A. 1","B. 2","C. 0","D -1"},
	  {"A. in diddy's basement","B. epstein island","C. micheal jackson's basement","D. Mr.beast's video"},
	 {"A. out of world","B. phub","C. youtube kids","D. larry's wife"}};

	char answerKey[] = { 'C','B','B' };

	int size = sizeof(questions)/sizeof(questions[0]);
	char guess;
	int score = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "****************************************" << std::endl;
		std::cout << questions[i] << std::endl;
		std::cout << "****************************************" << std::endl;

		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
			std::cout << options[i][j] << std::endl;
		}
		std::cin >> guess;
		guess = toupper(guess);
		if (guess == answerKey[i]) {
			std::cout << "You are correct! " << std::endl;
			score++;
		}
		else {
			std::cout << "You are Wrong!" << std::endl;
			std::cout << "Correct ans is " << answerKey[i] << std::endl;
		}
	} std::cout << "your final score is " << score << " out of " << size << std::endl;
	std::cout << "****************************************" << std::endl;
	
	system("pause");
	system("cls");
	// Dynamic array example

	std::string cars[][3] = { {"BMW", "Audi", "Mercedes"},
							   {"Toyota", "Honda", "Ford"} };

	std::cout << "Dynamic Array Example" << std::endl;
	std::cout << cars[0][0] << std::endl; // Accessing BMW
	std::cout << cars[0][1] << std::endl; // Accessing Audi
	std::cout << cars[0][2] << std::endl; // Accessing Mercedes
	std::cout << cars[1][2] << std::endl; // Accessing Honda
	std::cout << cars[1][1] << std::endl; // Accessing Toyota
	std::cout << cars[1][0] << std::endl; // Accessing Ford
	std::cout << "Total number of columns: " << sizeof(cars[0]) / sizeof(cars[0][0]) << std::endl; // Number of columns
	std::cout << "Total number of rows: " << sizeof(cars) / sizeof(cars[0]) << std::endl; // Number of row
	
	int rows = sizeof(cars) / sizeof(cars[0]);
	int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns ; j++) {
			std::cout << cars[i][j] << "\t";
		}
		std::cout << "\n";
	}
 
	system("pause");
	system("cls");

	// Example of array with user input
	int count = 0;
	std::string array[5];
	int arrsize = sizeof(array) / sizeof(array[0]);
	std::string temp;

	for (int i = 0; i < arrsize; i++)
	{
		do {
			std::cout << "Enter a food you like #" << i << " :"<< std::endl;
			std::getline(std::cin, temp);
		if(temp == "q" || temp == "Q")
		{
			std::cout << "Exiting input..." << std::endl;
			break;
		}
		else if (temp.empty())
		{
			std::cout << "input is not valid please try again" << std::endl;
		}
		else {
			array[i] = temp;
			count++;
			std::cout << "You entered: " << array[i] << std::endl;
		}
		} while(temp.empty());
	}

	std::cout << "Array elements are: " << std::endl;

	for (int i =0; i < count ; i++)
	{
		std::cout << array[i] << std::endl;
	}

	system("pause");
	system("cls");

	//fill() =fills the array with a specific value
	const int fillsize = 99;
	std::string fastfoods[fillsize];

	fill(fastfoods,fastfoods + (fillsize/3) , "pizza");
	fill(fastfoods + (fillsize / 3) ,fastfoods + (fillsize /3)*2, "hamburgers");
	fill(fastfoods + (fillsize / 3) * 2, fastfoods + fillsize , "burger");

	for (std::string food : fastfoods)
	{
		std::cout << food << std::endl;
	}
	std::string Games[10] = { "GTA VI","GTA VI","GTA VI","GTA VI","GTA VI","GTA VI","GTA VI","GTA VI","GTA VI","GTA VI" };

		for (std::string game : Games)
		{
			std::cout << game << std::endl;
		}

		system("pause"); 
		system("cls"); // Clear the console screen


	// Example of bubble sort with user input
	int bubblearrsize;
	std::cout << "Bubble Sort Example" << std::endl;

	while (true) {
		std::cout << "Enter the number of elements you want to sort: ";
		std::cin >> arrsize;

		if (std::cin.fail() || arrsize <= 0) {
			std::cin.clear();               // clear error flag
			std::cin.ignore(10000, '\n');   // discard bad input
			std::cout << "Invalid input! Please enter a positive number." << std::endl;
			system("pause"); 
			system("cls"); // Clear the console screen
		}
		else {	
			break; // input is valid
		}
	}
	double* arr = new double[arrsize];
	for (int i = 0; i < arrsize; i++)
	{
		while (true) {
			std::cout << "Enter the element i(" << i << "): ";
			std::cin >> arr[i];

			if (std::cin.fail()) {
				std::cin.clear(); // clear the error flag
				std::cin.ignore(10000, '\n'); // discard the bad input
				std::cout << "Invalid input! Please enter a number." << std::endl;
			}
			else {
				break; // valid input received
			}
		}
	}

	//displaying the array before sorting
	std::cout << "Array before sorting: [ ";
	for (int i = 0; i < arrsize; i++)
	{
		std::cout << arr[i] ;
		if (i < arrsize - 1) std::cout << "," ;
	}
	std::cout << " ]" << std::endl;
	char choice;
	std::cout << "In Which order you want to sort the array? (A=Ascending, D=Descending): ";
	std::cin >> choice;

	if(choice == 'A' || choice == 'a')
	{
		std::cout << "Sorted Array in Ascending order..." << std::endl;
		Ascending(arr, arrsize);
		std::cout << "Array after sorting: [ ";
		for (int i = 0; i < arrsize; i++)
		{
			std::cout << arr[i];
			if (i < arrsize - 1) std::cout << ",";
		}
		std::cout << " ]" << std::endl;
	}
	else if (choice == 'D' || choice == 'd')
	{
		std::cout << "Sorted Array in descending order..." << std::endl;
		Descending(arr, arrsize);
		std::cout << "Array after sorting: [ ";
		for (int i = 0; i < arrsize; i++)
		{
			std::cout << arr[i];
			if (i < arrsize - 1) std::cout << ",";
		}
		std::cout << " ]" << std::endl;
	}
	else {
		std::cout << "Invalid choice. Please enter 'A' for Ascending or 'D' for Descending." << std::endl;
	}
	
	delete[] arr; // Free the dynamically allocated memory

	std::system("pause"); 

	system("cls"); // Clear the console screen


	// Example of array iteration
	std::string foods[] = { "paneer butter masala","aloo gobi","dal makhani","chole bhature","biryani" };
	int foodsize = sizeof(foods) / sizeof(foods[0]);
	int index;
	std::string myFood;
	std::cout << "Enter the food you want to find :" << std::endl;
	std::cin.ignore(); 
	std::getline(std::cin, myFood);
	index = searchFood(foods, size, myFood);
	if (index != -1)
	{
		std::cout << "Food found at index: "<< index << std::endl;
	}
	else
	{
		std::cout << "Food not found" << std::endl;
	}
	return 0;

}


int searchFood(std::string foods[], int foodsize, std::string element)
{
	for (int i = 0; i < foodsize; i++)
	{
		if(foods[i] == element)
		return i;
	}
	return -1;
}

void Ascending (double arr[],int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void Descending(double arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void refswap(std::string &x, std::string &y)
{
		std::string temp;
		temp = x;
		x = y;
		y = temp;
		
}