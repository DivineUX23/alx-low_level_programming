#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: 0.
 */
void puts2(char *y)
{
	int x = 0;

	while (x >= 0)
	{
		if (y[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(y[x]);
		x++;
	}
}
