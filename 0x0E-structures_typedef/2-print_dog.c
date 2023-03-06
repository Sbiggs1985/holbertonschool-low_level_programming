#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - printing dog depending on the input
 * @d: Print a structure dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
