#include "main.h"
/**
 *create_array - creates an array of charc initialised with a specific char
 *@size: size of array to be created
 *@c: character to initialise
 *
 *Return: NULL if size is 0 or error occurs otherwise 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
