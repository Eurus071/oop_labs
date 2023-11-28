#include<iostream>
using namespace std;
/*   NAME: KODIROVA SADOKATXON
     ID:U2310140      */
void first()
{   //   1.  Write a Program to swap two values using functions.
    int a, b, p;
    cout << "Enter a : " << endl; cin >> a;
    cout << "Enter b : " << endl; cin >> b;
    p = b;
    b = a;
    a = p;
    cout << "Now a : " << a << endl;
    cout << "Now b : " << b << endl;

}
void second()
{
    //   2.  Write a Program to convert time to minutes using functions.
    int hour, second, minute;
    cout << " hour : minute : second " << endl;
    cin >> hour;
    cin >> minute;
    cin >> second;

    minute = (hour * 60) + minute + (second / 60);
    cout << " Total minutes are : " << minute << endl;
    cout << " Thank you! " << endl;
}
void third()
{
    //  3.  Write a Program using function to sum the series for n terms(n should input from user)
    int n, fact = 1;
    float  sum = 0;
    cout << "Enter the number: " << endl; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += pow(i, i) / fact;
    }
    cout << "Total sum : " << sum << endl;
}


void fourth()
{
    //   4.  Write a Program to calculate area of a circle using functions.
    float radius;
    float pi = 3.14;
    cout << " Enter the radius of circle: "; cin >> radius;
    float area = pi * pow(radius, 2);
    cout << "Area of this circle is " << area << endl;

}

int main()
{
    int k;
    cout << "Enter the number of program"; cin >> k;
    switch (k)
    {
    case 1:
    {
        first();
        break;
    }
    case 2:
    {
        second();
        break;
    }
    case 3:
    {
        third();
        break;
    }
    case 4:

    {
        fourth();
        break;
    }
    }
    return(0);

}