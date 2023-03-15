#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - Entry point
 * Description: Concatenates all the arguments of your program
 * @ac: Integer input
 * @av: Strings
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
char *argz;
int i, j;
int str_len = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str_len++;
}
str_len++;
}

argz = malloc(sizeof(char) * str_len);

if (argz == NULL)
{
	return (NULL);
}

str_len = 0;
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	argz[str_len++] = av[i][j];
	}
	argz[str_len++] = '\n';
}

argz[str_len] = '\0';

return (argz);
}
