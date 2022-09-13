#include "main.h"
/**
 * main - program print _putchar follow by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char str[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
