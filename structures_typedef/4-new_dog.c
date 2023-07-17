#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: function parameter
 *
 * Return: count
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination function
 * @src: copied function
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - function for a new dog
 * @name: first argument
 * @age : second argument
 * @owner: third argument
 *
 * Return: NULL if fail else dog1
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);
	dog1->age = age;
	dog1->name = NULL;
	dog1->owner = NULL;

	if (name != NULL)
	{
		dog1->name = malloc(_strlen(name) + 1);
		if (dog1->name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		_strcpy(dog1->name, name);
	}
	if (owner != NULL)
	{
		dog1->owner = malloc(_strlen(owner) + 1);
		if (dog1->owner == NULL)
		{
			free(dog1->owner);
			free(dog1);
			return (NULL);
		}
		_strcpy(dog1->owner, owner);
	}
	return (dog1);
}
