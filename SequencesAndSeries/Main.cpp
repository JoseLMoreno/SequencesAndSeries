#include <iostream>
#include <math.h>
using std::sin;
using std::cos;
using std::pow;
using std::cout;
using std::endl;
//using std::ostream;
//using std::cin;
const long double pi = 3.14159265358979323846;
const long double e = 2.71828182845904523536;

void firstSequence();
void secondSequence();
void thirdSequence();
void fourthSequence();

void firstSeries();
void secondSeries();

int main()
{

	//firstSequence();
	//secondSequence();
	//thirdSequence();
	//fourthSequence();
	//firstSeries();
	secondSeries();
	return 0;
}

void firstSequence()

{
	//  first 5
	for (long float n = 1; n <= 5; n++)
	{
		long float x = n*sin(pi / n);
		cout << x << endl;
	}
	cout << endl;
	// first 10
	for (long float n = 1; n <= 10; n++)
	{
		long float x = n*sin(pi / n);
		cout << x << endl;
	}
	cout << endl;
	// first 100
	for (long float n = 1; n <= 100; n++)
	{
		long float x = n*sin(pi / n);
		cout << x << endl;
	}
	cout << endl;
}

void secondSequence()
{
	// first 5
	for (long float n = 1; n <= 5; n++)
	{
		long float x = 1 - (2 / n);
		x = pow(x, n);
		cout << x << endl;
	}
	cout << endl;
	// first 10
	for (long float n = 1; n <= 10; n++)
	{
		long float x = 1 - (2 / n);
		x = pow(x, n);
		cout << x << endl;
	}
	cout << endl;
	// first 100
	for (long float n = 1; n <= 100; n++)
	{
		long float x = 1 - (2 / n);
		x = pow(x, n);
		cout << x << endl;
	}
	cout << endl;
}

void thirdSequence()
{
	// n*sin(pi/n) for first 5
	for (long float n = 1; n <= 5; n++)
	{
		long float x = pow(-1, n);
		x = x*( (2* pow(n,3))/(pow(n,3)+1));
		cout << x << endl;
	}
	cout << endl;
	// first 10
	for (long float n = 1; n <= 10; n++)
	{
		long float x = pow(-1, n);
		x = x*((2 * pow(n, 3)) / (pow(n, 3) + 1));
		cout << x << endl;
	}
	cout << endl;
	// first 100
	for (long float n = 1; n <= 100; n++)
	{
		long float x = pow(-1, n);
		x = x*((2 * pow(n, 3)) / (pow(n, 3) + 1));
		cout << x << endl;
	}
	cout << endl;
}

void fourthSequence()
{
	// first 5
	for (long double n = 1; n <= 5; n++)
	{
		long double x = pow(n, 5) * pow(e,-n);
		cout << x << endl;
	}
	cout << endl;
	// first 10
	for (long double n = 1; n <= 10; n++)
	{
		long double x = pow(n, 5) * pow(e, -n);
		cout << x << endl;
	}
	cout << endl;
	// first 100
	for (long double n = 1; n <= 100; n++)
	{
		long double x = pow(n, 5) * pow(e, -n);
		cout << x << endl;
	}
	cout << endl;


}

void firstSeries()
{
	
	double two = 2.0;
	double three = 3.0;

	//partila sum for 5
	for (long double n = 1, x = 0; n <= 5; n++)
	{
		x = pow(two / three, n + 2.0);
		cout << pow(two, n + 2) << '/' << pow(three, n + 2);
		if (n < 5)
			cout << " + ";
	}
	cout << endl << endl;

	//partial sum for 10th
	for (long double n = 1, x = 0; n <= 10; n++)
	{
		cout << pow(two, n + 2) << '/' << pow(three, n + 2);
		if (n < 10)
			cout << " + ";
	}
	cout << endl << endl;

	//partial sum for 20th
	for (long double n = 1, x = 0; n <= 20; n++)
	{
		cout << pow(two, n + 2) << '/' << pow(three, n + 2);
		if (n < 20)
			cout << " + ";
	}
	cout << endl << endl;

	//first five values for series
	for (long double n = 1, x = 0; n <= 5; n++)
	{
		x = x + pow(two/three, n + 2.0);
		cout << x << endl;
	}
	cout << endl;

	//first ten values for series
	for (long double n = 1, x = 0; n <= 10; n++)
	{
		x = x + pow(two / three, n + 2.0);
		cout << x << endl;
	}
	cout << endl;

	//first ten partial sums
	for (long double n = 1, x = 0; n <= 20; n++)
	{
		x = x + pow(two / three, n + 2.0);
		cout << x << endl;
	}
	cout << endl;
}

void secondSeries()
{
	//first five sequence
	for (long double n = 1, x = 0; n <= 5; n++)
	{
		x = (1 / ((n + 2) * (n + 3)));
		cout << x << endl;
	}
	cout << endl;

	//first ten sequence
	for (long double n = 1, x = 0; n <= 10; n++)
	{
		x = (1 / ((n + 2) * (n + 3)));
		cout << x << endl;
	}
	cout << endl;

	//first twenty sequence
	for (long double n = 1, x = 0; n <= 20; n++)
	{
		x = (1 / ((n + 2) * (n + 3)));
		cout << x << endl;
	}
	cout << endl;

	//first five partial sums
	for (long double n = 1, x = 0; n <= 5; n++)
	{
		x = x + (1/((n+2) * (n+3)));
		cout << x << endl;
	}
	cout << endl;

	//first ten partial sums
	for (long double n = 1, x = 0; n <= 10; n++)
	{
		x = x + (1 / ((n + 2) * (n + 3)));
		cout << x << endl;
	}
	cout << endl;

	//first twenty partial sums
	for (long double n = 1, x = 0; n <= 20; n++)
	{
		x = x + (1 / ((n + 2) * (n + 3)));
		cout << x << endl;
	}
	cout << endl;

	//first twenty partial sums formatted for paper instead of plotting
	//first twenty partial sums
	for (long double n = 1, x = 0; n <= 20; n++)
	{
		x = x + (1 / ((n + 2) * (n + 3)));
		if (n == 1)
			cout << "{ ";
		cout << x;
		if (n < 20)
			cout << ", ";
		else
			cout << " }";
	}
	cout << endl;
}