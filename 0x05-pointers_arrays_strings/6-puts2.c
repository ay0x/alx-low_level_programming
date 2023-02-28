#include "main.h"
/**
 * puts2 - prints strings in even indexs
 * @str: Characters to check
 * Return: Void
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
