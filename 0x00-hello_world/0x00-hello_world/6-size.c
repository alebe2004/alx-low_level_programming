#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int a;
	long int b;
	lon long int c;
	char d;
	float f;
	print("size of a char : %lu byte(s)\n"
			, (unsigned long)sizeof(d));
	printf("size of un int: %lu byte(s)\n",
			 (unsigned long)sizeof(a));
	printf("size of long int: %lu byte(s)\n",
			(unsgined long)sizeof(b));
	print("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("size of a float: %lu byte(s)\n",
			(unsgined long)sizeof(f));
	return (0);
}
