#include <iostream>
using namespace std;

int addition(int a, int b)
{
	return (a+b);
}

float addition(float a, float b)
{
	return (a*b);
}

void sign(int);

int main()
{
	float a,b;
	a=4.5;
	b=2.1;
	
	int input;
	
	cout << addition(5,3) << "\n";
	cout << addition(a,b) << "\n";
	
	cin >> input;
	sign(input);
	
	return 0;
}

void sign(int a){
	if((a%2)==0) cout << "Number is even.\n";
	if((a%2)==1) cout << "Number is odd.\n";
}