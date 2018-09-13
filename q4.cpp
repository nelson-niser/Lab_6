#include<iostream>
using namespace std;

//int function that returns minimum of two numbers
int f1(int a, int b){
if(a<b) { return a; }
else if(b<a)  {return b;}
else if(a==b) {return 0;}
}

//void function
void f2(int a, int b, int &c){
if(a<b) { c=a; }
else if(b<a)  { c=b; }
else if(a==b) { c=0; }
}

//Driver function
int main(){
int a, b, c, d;

//ask user two numbers
cout << "Enter two numbers: ";
cin >> a >> b;

//call function f1
c = f1(a,b);
if(c==0) { cout << "They have the same value" << endl; }
else { cout << c << " is the minimum"<< endl; }

//call function f2
f2(a,b,d);
if(d==0) { cout << "They have the same value" << endl; }
else { cout << d << " is the minimum" << endl; }


return 0;
}
