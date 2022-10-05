# include <stdio.h>
# include <stdlib.h>


/**
 *main - program that prints its name, followed by new line
 *@argc: arguments that contains argument input
 *@argv: argument that stores the srings in array of char* (strings)
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num_1, num_2, mul;

	if (argv != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	Return (0);


}
