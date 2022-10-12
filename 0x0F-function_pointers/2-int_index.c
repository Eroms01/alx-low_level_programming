#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: compare the elements of throw array
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i += 1)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);


}
