#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - define a new type struct
 *
 * @name: type of char, dog's name
 * @age: type of float, dog's age
 * @owner: type of char, dog's owner
 *
 * Description: define a type of struct with the above members
 */



typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
