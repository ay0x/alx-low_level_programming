#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Entry point
 * Description: concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: First byte
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenate;
unsigned int i, j, str_len1 = 0, str_len2 = 0, total_len = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[str_len1] != '\0')
	str_len1++;

while (s2[str_len2] != '\0')
	str_len2++;

if (n < str_len2)
	str_len2 = n;

total_len = str_len1 + str_len2;
concatenate = malloc(sizeof(char) * total_len + 1);

for (i = 0; s1[i] != '\0'; i++)
{
	concatenate[i] = s1[i];
}

for (j = 0; j < str_len2; j++)
{
	concatenate[i + j] = s2[j];
}

if (concatenate == NULL)
	return (NULL);
concatenate[total_len] = '\0';
return (concatenate);
}
