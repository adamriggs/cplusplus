// operating with variables

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  // declaring variables:
  int a, b;
  int result;
	string _string="Adam is cool";

int arr[5];


  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;
	arr[0]=a;
	arr[1]=b;

	getline(cin,_string);

  // print out the result:
  cout << result;

	cout<< " "+ _string;
	cout<< "\n";

for(int i=0;i<5;i++){
	cout<<arr[i]+"\n";
}

  // terminate the program:
  return 0;
}