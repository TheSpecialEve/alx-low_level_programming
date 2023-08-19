#include <stdio.h>
#include <math.h>

/**
 * getLargestPrimeFactor - is a function to get largest prime factor
 *
 * @n long int : is the number
 *
 * Return: (long int);
 */
long int getLargestPrimeFactor(long int n)
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

	printf("%ld\n", getLargestPrimeFactor(n));

	return (0);


}
