#include "dog.h"

/**
 * new_dog - New dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;

	int ln, lo, i;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (ln = 0; name[ln]; ln++)
		;

	for (lo = 0; owner[lo]; lo++)
		;
	p_dog->name = malloc(ln + 1);
	p_dog->owner = malloc(lo + 1);

	if ((p_dog->name) == NULL || (p_dog->owner) == NULL)
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < ln; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < lo; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
