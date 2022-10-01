#include "main.h"
/**
 * _isdigit - Check for a digit
 * @c: Character to be checked
 *
 * Return: 1 if c is digit, 0 otherwise
 *
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
