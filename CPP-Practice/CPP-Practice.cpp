// CPP-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int searchFood(std::string foods[], int size, std::string element);
void Ascending(double arr[], int size);
void Descending(double arr[], int size);
int main()
{

	// Example of bubble sort with user input
	int arrsize;
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
	int size = sizeof(foods) / sizeof(foods[0]);
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

}
int searchFood(std::string foods[], int size, std::string element)
{
	for (int i = 0; i < size; i++)
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