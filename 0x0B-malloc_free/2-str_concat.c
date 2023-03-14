#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Entry point
 * Description: Concatenates two strings using malloc function
 * @s1: First string array
 * @s2: Second string array
 * Return: Pointer to s2
 */

char *str_concat(char *s1, char *s2)
{
char *concatenate;
int str_len1 = 0;
int str_len2 = 0;
int i, j;
int total_len = 0;

while (s1[str_len1] != '\0')
{
	str_len1++;
}

while (s2[str_len2] != '\0')
{
	str_len2++;
}

total_len = str_len1 + str_len2;

concatenate = (char *)malloc(sizeof(char) * total_len + 1);

for (i = 0; i < str_len1; i++)
{
concatenate[i] = s1[i];
}

for (j = 0; j < str_len2; j++)
{
	concatenate[i + j] = s2[j];
}

if (concatenate == NULL)
{
	return (NULL);
}

return (concatenate);

}
