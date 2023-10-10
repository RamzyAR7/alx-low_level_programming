#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * by ramzy
*/
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}

}
