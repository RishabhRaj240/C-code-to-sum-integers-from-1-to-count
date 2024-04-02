#include <stdio.h>

int main()
{
	unsigned int sum = 0; // Stores the sum of integers
	unsigned int count = 0; // The number of integers to be sumed

	// Read the number of integers to be sumed
	printf("\nEnter the number of integers you want to sum: ");
	scanf_s(" %u", &count);

	// Sum integers from 1 to count
	unsigned int i;
	for (i = 1; i <= count; ++i)
		sum += i;

	printf("\nTotal of the first %u numbers is %u\n", count, sum);
	return 0;
}

