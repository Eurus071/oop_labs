/* #include<iostream>
using namespace std;
int main()
{
	int number;
	
	cout << "Number is :"; cin >> number;
	if (number < 0)
	{
		number = number * (-1);
	}
	if (number == 0)
	{
		cout << "Number is zero \n";
	}
	int counter = 0;
		while (number > 0)
		{
			number /= 10;
				counter++;

		}

	cout << "This number have " << counter << " digits.";





	system("pause>0 ");
	return 0;
}*/  



#include<iostream>
using namespace std;
int main()
{
	char x;

	for (char i = 65; i <= 69; i++)
	{

		for (char j = 65; j <= i; j++)
		{

			cout << x << endl;

		}
	}
	cout << "\n" << endl;






	return 0;
}