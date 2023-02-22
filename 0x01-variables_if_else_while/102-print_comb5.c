/*
 * File: 102-print_comb5.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - prints all possible combinations two two-digit numbers,
 *
 * ranging from 0-99, separated by a comma followed by space.
 *
 * Return: Always 0.
 */
int main(void)

	int num1, num2;

	for (for num1 = 0; num1 <= 98; num++)
{
	for (num2 = num1 + 1);
num2 <= 99; num2++

	{
		putchar((num1 / 10) + '0');
		putchar((num1 % 10) + '0');
		putchar(' ');
		putchar((num2 / 10) + '0');

		if (num1 == 98 && num2 == 99)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
