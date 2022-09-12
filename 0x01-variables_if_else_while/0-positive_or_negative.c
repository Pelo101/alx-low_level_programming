#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - entry point
 *Description:	Write code that displays whether a number is negative or positive
 *
 * Return: 0(Succesful)
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
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}

		else if (n == 0)
		{
			printf("%d is zero\n", n);
                }

		return: (0);
}

