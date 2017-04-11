#pragma once

/**
 GCD Optimized Euclides algorithm
 Finding the "Greatest Common Divisor" of two integers.
 */
int GCD(int x, int y) 
{
	if ( y != 0 )
	{
		return GCD(y, x%y);
	}

	return x;

}

/**
 isPerfectNumber
 Perfect number is a positive integer that is equal
 to the sum of its proper positive divisors
*/
bool isPerfectNumber(int x)
{
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			sum += i;
		}
	}

	return sum == x;
}

/**
	Fibonacci Sequence
	Retruns n-th number form this sequence
	Every number after the first two is the sum of the 
	two preceding ones
*/
int fibonacciSequence(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fibonacciSequence(n - 1) + fibonacciSequence(n - 2);
	}
}
