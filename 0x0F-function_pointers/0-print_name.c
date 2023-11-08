#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: the name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
	{
		(*f)(name);
	}
}
