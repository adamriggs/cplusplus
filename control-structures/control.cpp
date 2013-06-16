#include <iostream>

using namespace std;

int main()
{
	int n;
	
	n=10;
	
	while(n>0)
	{
		cout << n << ", ";
		--n;
	}
	cout << n;
	cout << "\n";
	
	n=10;
	
	do
	{
		cout << n<< ", ";
		--n;
		
	}while(n!=0);
	
	cout << n;
	cout << "\n";
	
	n=10;
	
	for(int i=0;i<n;i++)
	{
		cout << i << ", ";
		
	}
		cout << n;
		cout << "\n";
	
	return 0;
	
}