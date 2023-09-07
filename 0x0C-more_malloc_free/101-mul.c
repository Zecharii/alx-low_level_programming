#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return c >= '0' && c <= '9';
}

/**
 * multiply - multiplies two positive numbers represented as strings
 * @num1: first positive number
 * @num2: second positive number
 *
 * Return: 0 on success, exits with an error message and status 98 on failure
 */
int multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;
	while (num1[len1] || num2[len2])
	{
		if (num1[len1] && !is_digit(num1[len1])) 
		{
			printf("Error\n");
			exit(98);
		}
		if (num2[len2] && !is_digit(num2[len2]))
		{
			printf("Error\n");
			exit(98);
		}
		len1 += num1[len1] ? 1 : 0;
		len2 += num2[len2] ? 1 : 0;
	}
	
	int *result, i, j, carry, n1, n2, sum;
	
	result = calloc(len1 + len2, sizeof(int));
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}
	
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		
		result[i + j + 1] += carry;
	}
	
	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;
	
	for (; i < len1 + len2; i++)
		printf("%d", result[I]);
	printf("\n");
	
	free(result);
	return (0);
}

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, exits with an error message and status 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	return multiply(argv[1], argv[2]);
}

    return multiply(argv[1], argv[2]);
}
