#include <stdio.h>
#include "main.h"
/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 1 success
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
