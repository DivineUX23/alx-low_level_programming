#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer swap
 * @b: integer swap
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	  int x;
    x = *a;
    *a = *b;
    *b = x;
}
