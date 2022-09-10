#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all pssobile different comn=binations of two digits.
 *
 * Return: Alawys 0 (Success)
 */

int main (void)
{
	int sum1 = 0;
	int sum2, sum3;

	while (sum1 <= 9)
	{
		sum2 = 0;
		while (sum2 <= 9)
		{
			sum3 = 0;
			while (sum3 <= 9)
			{
				if (sum1 != sum2 && sum1 < sum2 && sum2 != sum3 && sum2 < sum3)
				{
					putchar(sum1 + 48);
					putchar(sum2 + 48);
					putchar(sum3 + 48);

					if (sum1 + sum2 + sum3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++sum3;
			}
			++sum2;
		}
		++sum1;
	}
	putchar('\n');

	return (0);
}
				 
