#include "pch.h"
#include <iostream>
using namespace std;

int sumSquareEvenNumbers(int firstNum, int secondNum) {

	if /*firstNum is even convert to next odd number*/ (firstNum % 2 == 0) {
		firstNum++;
	}
	if /*secondNum is even*/ (secondNum % 2 == 0) {
		secondNum = secondNum - 2;
	}
	else /*secondNum is odd*/ {
		secondNum = secondNum - 1;
	}
	
	++firstNum;
	int sumloop = firstNum*firstNum;
	int nextSquareEvenNum = firstNum*firstNum;

	if (nextSquareEvenNum < secondNum*secondNum) {
		while (nextSquareEvenNum < secondNum*secondNum) {
			nextSquareEvenNum = (nextSquareEvenNum + 2)*(nextSquareEvenNum + 2);
			sumloop = nextSquareEvenNum + sumloop;
		}
		return sumloop;
	}

	else {
		return 0;
	}
}

//Driver function
int main()
{
	int firstNum, secondNum, sumSquareEven;
	//Ask user for two numbers
	cout << "Enter two numbers to find the sum of square all even numbers between them: ";
	cin >> firstNum >> secondNum;

	sumSquareEven = sumSquareEvenNumbers(firstNum, secondNum);
	cout << "the required sum is " << sumSquareEven << endl;

}
