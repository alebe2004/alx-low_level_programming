#include <stdlib.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints all the data of a dog
 * @d: A dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d d != NULL)
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
}
