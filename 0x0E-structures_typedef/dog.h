#ifndef DOG_H

typedef struct dog {
    char *name;
    char *owner;
    float age;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */