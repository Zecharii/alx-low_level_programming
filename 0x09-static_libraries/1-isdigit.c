#include "main.h"


/**
* _isdigit - checks if parameter is a digit.
* @c: input character.
* Return: 1 if c is a digit, 0 therwise.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
