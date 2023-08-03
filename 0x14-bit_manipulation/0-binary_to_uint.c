#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Entry point.
 * Description: Convert binary to decimal.
 * @b: Character string holding the binary.
 * Return: Decimal value of the binary.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	if (b[0] == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal = decimal * 2 + (b[i] - '0');
		i++;
	}

	return (decimal);
}
