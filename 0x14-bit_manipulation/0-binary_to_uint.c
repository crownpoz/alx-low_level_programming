#include "main.h"
#include "stdlib.h"

/**
 *binary_to_unit - converts binary to an unsigned int
 *@b: pointer to a string of 0 and 1 chars
 *Return: converted number, or 0 if string or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int j = 0;

	if (!b)
		return (0);
	while (b[j])
	{
		if (b[j] > '1' || b[j} < '0')
			return (0);
		num = 2 * num + (b[j] - '0');
		j++;
	}
	return (num);
}
