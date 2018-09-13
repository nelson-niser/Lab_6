#include<iostream>
using namespace std;

	//Function that adds two int 
	int sum(int a, int b){
	return (a+b);
	}

	//int function that returns maximum of two numbers
	int max(int a, int b){
	if(a>b) { return a; }
	else if(b>a)  {return b;}
	else if(a==b) {return 0;}
	}

	//int function that returns minimum of two numbers
	int min(int a, int b){
	if(a<b) { return a; }
	else if(b<a)  {return b;}
	else if(a==b) {return 0;}
	}



//Driver function
int main(){
int a, b, c, f;

	//ask user two inputs
	cout << "Enter two numbers: ";
	cin >> a >> b;

	//ask user which operation to perform
	cout << "To find sum, enter 1" << endl;
	cout << "To find max, enter 2" << endl;
	cout << "To find min, enter 3" << endl;
	cin >> f;

	if (f==1){
		// call function sum
		c=sum(a,b);
		cout << "Their sum is " << c << endl;
		}
	else if (f==2){
		//call function max
		c = max(a,b);
		if (c==0) { cout << "They have the same value" << endl; }
		else { cout << c << " is the maximum" << endl; }
		} 
	
	else if (f==3){
		//call function min
		c = min(a,b);
		if (c==0) { cout << "They have the same value" << endl; }
		else { cout << c << " is the minimum"<< endl; }
		}
	
	return 0;
}


