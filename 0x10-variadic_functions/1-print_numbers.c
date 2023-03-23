#include "variadic_function.h"
/**
 * print_numbers - print all the parametes.
(* a black line
 *@separator: the number of parametes
 *@n: the number of parameters
 *Description: this function prints all the parameters)?
(* section header: the header of this function is variadic_function.h)*
*Return: no retunr.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	i = 0;

	va_start(num, n);
	while (i < n)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && separator != NULL)

			printf("%s", separator);
		i++;
	}
va_end(num);
printf("\n");
}
