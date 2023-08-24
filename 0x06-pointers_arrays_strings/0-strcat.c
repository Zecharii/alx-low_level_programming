#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination.
 * @src: The source.
 * Return: The pointer to @dest.
 */

char *_strcat(char *dest, char *src)

{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
