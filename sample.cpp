#include "pch.h"
#include <iostream>
using namespace std;

int sumEvenNumbers(int firstNum , int secondNum ) {
	
	if /*firstNum is even convert to next odd number*/ (firstNum%2 == 0) {
		firstNum++;
	}
	if /*secondNum is even*/ (secondNum%2 == 0) {
		secondNum = secondNum - 2;
	}
	else /*secondNum is odd*/ {
		secondNum = secondNum - 1;
	}

	int sumloop = ++firstNum ; //sumloop = firstNum++
	int nextEvenNum = firstNum ;

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
	int firstNum, secondNum, sumEven ;
	//Ask user for two numbers
	cout << "Enter two numbers to find the sum of all even numbers between them: ";
	cin >> firstNum >> secondNum ;
    
	sumEven = sumEvenNumbers(firstNum, secondNum);
		cout << "the required sum is " << sumEven << endl ;
		
}
