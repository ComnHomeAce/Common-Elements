//This program prompts the user to enter two arrays of 10 integers
//and displays the common elements that appear in both arrays. 

#include <iostream>
using namespace std;

int main()
{
	int list1[10], list2[10];

	cout << "This program prompts the user to enter two arrays of 10 integers\n";
	cout << "and displays the common elements that appear in both arrays.\n\n";
	
	cout << "\nEnter 10 values for List 1. Press enter after each value.\n";

	//Loop to get values
	for (int i = 0; i < 10; i++)
	{
		cin >> list1[i];
	}
	
	cout << "\nEnter 10 values for List 2. Press enter after each value.\n";

	//Loop to get values
	for (int i = 0; i < 10; i++)
	{
		cin >> list2[i];
	}

	cout << "\nThe common elements of List 1 and List 2 are: ";

	//Loops to compare elements
	for (int i = 0; i < 10; i++) //Loops the index for List 1
	{
		for (int j = 0; j < 10; j++) //Loops the index for List 2
		{
			if (list1[i] == list2[j]) //Compares the elements of each list
			{
				cout << list1[i] << ", "; //Prints the value if it matches in both lists
			}
		}
	}
	cout << "\b\b \n\n";
}