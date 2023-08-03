#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - a function that returns the natural square root of a number.
* @n: number.
*Return: square root of n.
*/

int search _sqrt_recursion(int n, start, end)
{
	int mid;

	if (start <= end)
	{
		mid = ( start + end) / 2;

		if ((mid * mid <= n) && (mid + 1) * (mid  + 1) > n)
		{
			return mid;
		}
		else if (mid * mid < n)
		{
			return search_sqrt_recursion(mid + 1, end, n);
		}
		else
		{
			return search_sqrt_recursion(start, mid - 1, n);
		}

	}

}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
 	return _sqrt_recursion(n, 0, n);
}
