#ifndef DOG_H_
#define DOG_H_

/*library*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/*structure*/

/**
 * struct dog - struct for dogs
 * @name: first argument
 * @age: second argument
 * @owner: third argument
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);





#endif
