#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - will print an array of integers
 *
 * @array: It is the array t be printed
 * @size: it is the number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
