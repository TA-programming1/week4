#include <iostream>
#include <vector>

// Implement a function that returns the input’s power of 2  (x^2)
float task1(float input);

// Implement a function that takes in a vector of int or float. 
// The function should return the sum of every element in the vector. 
float task3(std::vector<float> numberToSum);

// Implement a function that takes in a character and returns the uppercase of that character. (Do not use toupper() )
char task4(char character);

// Implement a function that takes in a character. 
// It should return a vector containing every character that comes after that in the alphabet
std::vector<char> task5(char start);


int main()
{
	//task 1
	//std::cout << task1(5) << '\n';

	////Task 2
	//const int size{ 3 };
	//int arr[size]{};

	////task3
	//std::vector<float> numberToSum(8, 4);
	//std::cout << task3(numberToSum) << '\n';

	// Task 4
	//char input{};
	//std::cout << "Input a character: ";
	//std::cin >> input;
	//std::cout << task4(input);

	std::vector<char> alphabet = task5('d');
	for (int i{}; i < alphabet.size(); i++)
	{
		std::cout << alphabet[i] << " ";
	}
	std::cout << '\n';

	return 0;
}

float task1(float input)
{
	return input * input;
}

float task3(std::vector<float> numberToSum)
{
	float result{};

	for (int i{}; i < numberToSum.size(); i++)
	{
		result += numberToSum[i];
	}

	return result;
}

char task4(char character)
{
	if (character > 96)
		return character - ('a'-'A');
	else
		return character;
}

std::vector<char> task5(char start)
{
	std::vector<char> alphabet;

	// Doing to upper on the start value
	start = task4(start);
	char end = 'Z';

	for (int i{ start + 1 }; i <= end; i++)
		alphabet.push_back(i);

	return alphabet;
}
