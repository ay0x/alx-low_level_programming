#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @str: The string to calculate the length of.
 * Return: The length of the string.
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(str + 1));
	}
}

/**
 * pal_checker - Checks if a string is a palindrome.
 * @str: The string to check.
 * @left: The left index.
 * @right: The right index.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int pal_checker(char *str, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}

	if (str[left] != str[right])
	{
		return (0);
	}

	return (pal_checker(str, left + 1, right - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal_checker(s, 0, len - 1));
}
