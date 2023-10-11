#include <stdio.h>
#include "dog.h"

/**
	* init_dog  a dog structure
	* @d: The dog structure
	* @name: The dogs name
	* @age: The dogs age
	* @owner: The dogs owner
	* Return: Void
	*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
