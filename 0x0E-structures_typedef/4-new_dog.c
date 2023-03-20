#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str);

/**
 * new_dog - new dog funct
 * @name: char point
 * @age: float point
 * @owner: char point
 *
 * Description: makes a new dog
 * Return: NULL when fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	(*new_d).name = _strdup(name);
	if (!(*new_d).name)
	{
		free(new_d);
		return (NULL);
	}
	(*new_d).age = age;
	(*new_d).owner = _strdup(owner);
	if (!(*new_d).owner)
	{
		free((*new_d).name);
		free(new_d);
		return (NULL);
	}

	return (new_d);

}

/**
 * *_strdup - str dup function
 * @str: input string
 *
 * Description: returns pointer to memloc
 * Return: pointer for it
 */
char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *p;

	if (str == NULL)
		return (NULL);
	
	while (*(str + i) != '\0')
	{
		i++;
	}

	p = malloc(sizeof(char) * i + 1);

	if (p == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
