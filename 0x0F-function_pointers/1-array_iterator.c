#include <stdlib.h>

/**
 * array_iterator -  function given as a parameter on each element of an array
 * @array: A pointer to array
 * @size: Size of the array
 * @action: argumrnt to iterate array
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
