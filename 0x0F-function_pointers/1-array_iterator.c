#include <stdio.h>
#include "function_pointers.h"
/**
 * void array_iterator -  executes a function given as a parameter on each element of an array.
 * @array: input int array
 * @size: size of array
 * @action: pointer to action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
