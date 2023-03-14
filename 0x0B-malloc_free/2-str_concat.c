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
char *concat;
int str_len1 = 0;
int str_len2 = 0;
int i = 0;
int j = 0;
int total_len;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[str_len1] != '\0')
{
	str_len1++;
}
while (s2[str_len2] != '\0')
{
	str_len2++;
}
total_len = str_len1 + str_len2;

concat = (char *)malloc(sizeof(char) * total_len + 1);

for (i = 0; i < str_len1; i++)
{
concat[i] = s1[i];
}

for (j = 0; j < str_len2; i++, j++)
{
	concat[i] = s2[j];
}

if (concat == NULL)
	return (NULL);
return (concat);
}
