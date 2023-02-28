#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of anumber
 * @nld: number's last digt result
 * Return: value of the last digit
 */
int print_last_digt(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = ((-1) * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
