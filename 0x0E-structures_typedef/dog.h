#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Auth: Tijani H. Oluwatobiloba
 * Desc: Header file contains all function prototypes
 *       to be used in 0x0E-structures_typedef directory
 */

/**
 * struct dog - A new type describing dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog,defn new type
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
