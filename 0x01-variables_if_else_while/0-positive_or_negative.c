#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Description : This will return zero if it is equal to zero and positive if it is greater than zero and negative in case of less than zero.
 * Return: 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				else if (n < 0)
				{
					printf("%d is negative\n", n);
				}
					return (0);
}
