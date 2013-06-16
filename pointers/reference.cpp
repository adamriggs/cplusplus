//reference pointers

#include <iostream>
#include <string>
using namespace std;



void foo(const int &p){
	int q=p;
	++q;
	cout<<q<<"\n";
}

void goo(const int *p){
	cout<<p<<"\n";
}

int main ()
{
  // declaring variables:
	int a;
	int* b;
	int result;
	
	a=0;
	b=0x0;

	cout << &a << "\n";
//	cout << *b << "\n";
	foo(a);
	goo(&a);
	cout << a << "\n";

  // terminate the program:
  return 0;
}