#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - About the dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */

struct dog 
{
	char * name;
	float age;
	char * owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t

#endif
