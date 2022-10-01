#include "main.h"
/**
 * _isupper - Program Entry point
 * @c: character to be checked.
 *
 * Return: 1 if the character is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}

	}

	return (isupper);

}
