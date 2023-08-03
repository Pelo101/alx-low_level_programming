#include "main.h"

/**
*check_string  - checks characters of string.
* @s: string
* @i: parameter.
* @j: parameter.
*Return: string
*/

int check_string(char *s, int i, int j)
{

	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (check_string(s, i + 1, j - 1));
}

/**
*strlen_palindrome - length of string.
*@s: string.
*Return: string after recursion.
*/


int strlen_palindrome(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + strlen_palindrome(++s));

}

/**
* is_palindrome - checks if string is palindrome.
* @s: string.
*Return: returns 1 if a string is a palindrome and 0 if not.
*/


int is_palindrome(char *s)
{
	int n = strlen_palindrome(s);

	return (check_string(s, 0, n - 1));

}





