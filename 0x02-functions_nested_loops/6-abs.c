#include "main.h"

/**
 * _abs - Entry point
 * Description: Return the absolute number of any integer
 * @num: the integer value it receives
 * Return: The absolute number
 */

int _abs(int num)
{
	return (num * ((num > 0) - (num < 0)));
}
