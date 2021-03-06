#include <stdio.h>
#define SIZE 10 
/*
 * Write the add _ sort() function that inserts a number into a sorted array, so that
the array remains sorted. Write a program that reads 9 integers, stores them in an
array of 10 integers, and uses the sel _ sort() of the previous exercise to sort the
array in ascending order. Then, the program should read the 10th integer and use
the add _ sort() to insert it in the array.
 */
void sel_sort(int arr[], int size);
void add_sort(int arr[], int size, int num);

int main()
{
	int i, num, pin[SIZE];

	for(i = 0; i < SIZE-1; i++) /* Read 9 integers and store them in the array. */
	{
		printf("Enter number: ");
		scanf("%d", &pin[i]);
	}
	sel_sort(pin, SIZE-1); /* Sorting the 9 elements of the array. */

	printf("Insert number in sorted array: ");
	scanf("%d", &num);

	add_sort(pin, SIZE-1, num); /* Insert the 10th integer in the array. */
	for(i = 0; i < SIZE; i++)
		printf("%d\n", pin[i]);
	return 0;
}

void add_sort(int arr[], int size, int num)
{
	int i, pos;

	if(num <= arr[0])
		pos = 0;
	else
	{
		for(i = 0; i < size-1; i++)
		{
		/* Check all adjacent pairs up to the last one at positions SIZE-3 and SIZE-2 to find the position in which num should be inserted. */
			if(num >= arr[i] && num <= arr[i+1])
				break;
		}
		pos = i+1;
	}
	for(i = size; i > pos; i--)
		arr[i] = arr[i-1]; /* The elements are shifted one position to the right, starting from the last position of the array, that is [SIZE-1], up to the position in which the new element will be inserted. For example, in the last iteration, i = pos+1, so, arr[pos+1] = arr[pos]. */
	arr[pos] = num; /* Store the inserted number. */
}

void sel_sort(int arr[], int size)
{
	int i, j, temp;

	for(i = 0; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				/* Swap values. */
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
