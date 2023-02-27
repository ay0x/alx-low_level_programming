#include "main.h"
/**
 * swap_int - Entry point
 * Description: swap value of int 'a' to int 'b'
 * @a: Integer value of 'a'
 * @b: Integer value of 'b'
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
