#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as
 * a parameter on each element of an array.
 * @array: the array of num
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != 0 && action != 0)
	{

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
