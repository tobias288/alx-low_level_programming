#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiply two numbers
 * @argc: argument couter
 * @argv: argument valus
 * Return: always 0 success
 */

int main(int argc, char **argv)
{
	int num1, num2, result;


	if (argc != 3)
	{
		printf("Error!");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
