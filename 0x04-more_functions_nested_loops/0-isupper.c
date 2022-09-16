#include "main.h"

/**
 * main - entry
 * _isupper - function checks whether character is uppercase
 *@c: integer to be tested
 * Return: 1 (uppercase) or 0 (not uppercase)
 */



int _isupper(int c)

{

		if (c >= '65'  &&  c <= '90')

		{
			return (1);

		}
		else
		{
			return (0);
		}

}
