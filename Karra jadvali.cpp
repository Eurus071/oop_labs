#include <iostream>
using namespace std;
void first(int result=1)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i <<"*"<< j<<"="<<i*j << endl;
		}
		cout << endl;
		
	}
	
}

void second(int sum = 0);
void second(int sum)
{
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			cout << i << endl;
			sum += i;
		}
	}
	cout << "Sum is " << sum << endl;
}

int main()
{
	int a;
	cout << " We have 2 functions. Which one do you want: ";
	cin >> a;
	switch(a); 
	{
	case1: first();
	case2:second(); 
	}
	return(0);
 }

