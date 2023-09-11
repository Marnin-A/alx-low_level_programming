#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct of type dog
 */
typedef struct dog dog_t;

/**
 * struct dog - Struct that stores some information of a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: Struct called "dog" that stores its name, its age,
 * and the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
