#include <stdlib.h>

/**
    Insertion sort algorithm.
    Best: O(n)
    Average: O(n^2)
    Worst: O(n^2)
*/
void _insertionsort (int *array, int low, int high)
{
	if (high <= low)
		return;

	for (int ptr = low; ptr < high; ptr++)
	{
		for (int i = ptr + 1; i <= high; i++)
		{
			if (array[i] < array[ptr])
			{
				int c = array[ptr];
				array[ptr] = array[i];
				array[i] = c;
			}
		}
	} // End of the for //
}

void insertionsort(int *array, size_t size)
{
	_insertionsort (array, 0, size - 1);

} 
