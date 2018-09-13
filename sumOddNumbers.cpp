#include "pch.h"
#include <iostream>
using namespace std;

int sumOddNumbers(int firstNum, int secondNum) {

	if /*firstNum is odd convert to next even number*/ (firstNum % 2 != 0) {
		firstNum++;
	}
	if /*secondNum is odd*/ (secondNum % 2 != 0) {
		secondNum = secondNum - 2;
	}
	else /*secondNum is even*/ {
		secondNum = secondNum - 1;
	}

	int sumloop = ++firstNum; 
	int nextEvenNum = firstNum;
	
	if (nextEvenNum < secondNum) {
		while (nextEvenNum < secondNum) {
			nextEvenNum = nextEvenNum + 2;
			sumloop = nextEvenNum + sumloop;
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
	int firstNum, secondNum, sumOdd;
	//Ask user for two numbers
	cout << "Enter two numbers to find the sum of all odd numbers between them: ";
	cin >> firstNum >> secondNum;

	sumOdd = sumOddNumbers(firstNum, secondNum);
	cout << "the required sum is " << sumOdd << endl;

}
