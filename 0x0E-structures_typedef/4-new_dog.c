#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of dog
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *min_dog;
	int name_k = 0, own_k = 0;

	if (name != NULL && owner != NULL)
	{
		name_k = _strlen(name) + 1;
		own_k = _strlen(owner) + 1;
		min_dog = malloc(sizeof(dog_t));

		if (min_dog == NULL)
			return (NULL);
		min_dog->name = malloc(sizeof(char) * name_k);
		if (min_dog->name == NULL)
		{
			free(min_dog);
			return (NULL);
		}
		min_dog->owner = malloc(sizeof(char) * own_k);
		if (min_dog->owner == NULL)
		{
			free(min_dog->name);
			free(min_dog);
			return (NULL);
		}
		min_dog->name = _strcpy(min_dog->name, name);
		min_dog->owner = _strcpy(min_dog->owner, owner);
		min_dog->age = age;
	}
	return (min_dog);
}
/**
 * _strlen - string
 * @s: string
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int d = 0;

	for (; *s != '\0'; s++)
	{
		d++;
	}
	return (d);
}
/**
 * _strcpy - copy string
 * @dest: argument
 * @src: argument
 *
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0 ; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
