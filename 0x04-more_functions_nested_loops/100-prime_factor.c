#include <stdio.h>
#include <math.h>

/**
 * getMaxPrimeFactor - is a function to get max prime
 *
 * n - is the number
 *
 * Return: (long int);
 */
long int getMaxPrimeFactor(long int n)
{

	long int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{

		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max = n;
	}

	return (max);
}

/**
 * main - print the largest prime factor of the number 612852475143
 *
 * Return: (0)
 */
int main(void)
{

	long int n;

	n = 612852475143;

	printf("%ld\n", getMaxPrimeFactor(n));

	return (0);


}
