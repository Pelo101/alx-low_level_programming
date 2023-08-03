#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - a function that returns
* the natural square root of a number.
* @n: number.
*Return: square root of n.
*/


int _sqrt_recursion(int n)
{

	return (search_sqrt_recursion(n, 1));
}

/**
*search_sqrt_recursion - Square recursion
* @n: integer.
* @i: integer.
* Return: search_sqrt_recursion
*/

int search_sqrt_recursion(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (search_sqrt_recursion(n, i + 1));

}
