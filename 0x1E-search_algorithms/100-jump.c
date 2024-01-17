#include "search_algos.h"

int min(int a, int b){
	if(b>a)
	return a;
	else
	return b;
}
int jump_search(int *array, size_t size, int value);
{
	// Finding block size to be jumped
	int step = sqrt(size);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;
	while (array[min(step, size)-1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
	}

	// Doing a linear search for x in block
	// beginning with prev.
	while (array[prev] < value)
	{
		prev++;

		// If we reached next block or end of
		// array, element is not present.
		if (prev == min(step, size))
			return -1;
	}
	// If element is found
	if (array[prev] == value)
		return prev;

	return -1;
}


int main()
{
	int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
	int x = 55;
	int n = sizeof(arr)/sizeof(arr[0]);
	int index = jumpsearch(arr, x, n);
	if(index >= 0)
	printf("Number is at %d index",index);
	else
	printf("Number is not exist in the array");
	return 0;
}

// This code is contributed by Susobhan Akhuli
