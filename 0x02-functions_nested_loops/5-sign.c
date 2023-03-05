#include "main.h"
/**
 * print_sign - return if a number is positive or negative
 * 
 * @n: the number to check
 *
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if ( n < 0)
	{
	_putchar (45);
	return (-1);
	}
	else
	{	
         
                 _putchar (48);
                 return (0);
	}
}

