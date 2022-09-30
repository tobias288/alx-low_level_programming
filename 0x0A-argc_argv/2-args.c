#include <stdio.h>
#include "main.h"
/**
 * main - a program that print al argument it receive
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
