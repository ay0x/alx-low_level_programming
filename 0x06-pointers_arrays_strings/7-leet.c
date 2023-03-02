#include "main.h"

/**
 * leet - Entry point
 * Description: Function that encodes a string into 1337
 * @str: String
 * Return: Strings
 */

char *leet(char *str)
{
	int i, j;

	char leet_table[256] = {0};
	char *leet_chars = "44337711";
	char *leet_letters = "aAeEoOtTlL";

	for (i = 0; leet_letters[i] != '\0' && leet_chars[i] != '\0'; i++)
	{
		leet_table[(int) leet_letters[i]] = leet_chars[i];
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	if (leet_table[(int) str[i]])
	{
		str[i] = leet_table[(int) str[i]];
	}
	}
	return (str);
}

