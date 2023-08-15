#ifndef DOG_H_
#define DOG_H_

/**
*struct dog - dog variables.
*@name: parameter.
*@age: parameter.
*@owner: parameter.
*/



struct dog{

char *name;
float age;
char *owner;
};

/**
*dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
