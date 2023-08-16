#include "main.h"

/**
* _isalpha - Checks for letter, lowercase and uppercase characters
* @c: The character to be checked
* Return: 1 for a letter, lowercase or uppercase character or 0 for anything else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
