#include"main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 8; ++1)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
