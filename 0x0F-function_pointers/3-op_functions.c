#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_fun - matches operator from main
 * @s: op str
 * Return: 0
 */
int (*get_op_fun(char *s))(int, int)
{
op_t op_s[] = {
	{"+", op_add},
	{"-", op_sub},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int i = 0;

while (op_s[i].op)
{
if (*(op_s[i].op) == *s
		return (op_s[i].f);
		i++;
		}
		return (NULL);
		}