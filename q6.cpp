#include<iostream>
using namespace std;

//find sum of all even numbers btw two numbers
int sumEven(int firstNum, int secondNum)
{
int sum = 0;
	//if firstNum is odd decrement to previous even number
	if (firstNum%2 != 0)
		{
		firstNum--;
		}

	//firstNum is even + works for any secondNum
	while (firstNum+1 < secondNum-1)
		{
		firstNum = firstNum + 2;
		sum = firstNum + sum;
		}

return sum;
}

//find sum of all odd numbers btw two numbers
int sumOdd(int firstNum, int secondNum)
{
int sum = 0;
	//if firstNum is even decrement to previous odd number
	if (firstNum%2 == 0)
		{
		firstNum--;
		}

	//firstNum is odd + works for any secondNum
	while (firstNum+1 < secondNum-1)
		{
		firstNum = firstNum + 2;
		sum = firstNum + sum;
		}

return sum;
}

//find sum of square of all even numbers btw two numbers
int sumSqEven(int firstNum, int secondNum)
{
int sum = 0;
	//if firstNum is odd decrement to previous even number
	if (firstNum%2 != 0)
		{
		firstNum--;
		}

	//firstNum is even + works for any secondNum
	while (firstNum+1 < secondNum-1)
		{
		firstNum = firstNum + 2;
		sum = firstNum*firstNum + sum;
		}

return sum;
}

//find sum of square of all odd numbers btw two numbers
int sumSqOdd(int firstNum, int secondNum)
{
int sum = 0;
	//if firstNum is even decrement to previous odd number
	if (firstNum%2 == 0)
		{
		firstNum--;
		}

	//firstNum is odd + works for any secondNum
	while (firstNum+1 < secondNum-1)
		{
		firstNum = firstNum + 2;
		sum = firstNum*firstNum + sum;
		}

return sum;
}


int main()
{
int a,b,f1,f2,f3,f4;
// Ask user for 2 numbers
cout << "Enter two numbers (first smaller than second): ";
cin >> a >> b;

f1 = sumEven(a,b);
cout << "sum of all even numbers between them is " << f1 << endl;

f2 = sumOdd(a,b);
cout << "sum of all even numbers between them is " << f2 << endl;

f3 = sumSqEven(a,b);
cout << "sum of squares of all even numbers between them is " << f3 << endl;

f4 = sumSqOdd(a,b);
cout << "sum of squares of all odd numbers between them is " << f4 << endl;

return 0;
}
