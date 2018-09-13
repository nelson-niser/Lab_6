#include<iostream>
using namespace std;

//Function that adds two int 
int f1(int a, int b){
return (a+b);
}

//void function with ref parameter
void f2(int a, int b, int &c){
c = a + b;
}

//Driver function
int main(){
int a, b, c, d;

//ask user two inputs
cout << "Enter two numbers: ";
cin >> a >> b;

// call function f1
c=f1(a,b);
cout << "Their sum is " << c << endl;

//call function f2
f2(a,b,d);
cout << "Sum = "<< d << endl;

return 0;
}


