#include "main.h"

/**
* _isalpha - function that checks for alphabetic character.
*@c: character to check
* Return: 1 if c is a letter, lowercase or uppercase
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
