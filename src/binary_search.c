#include <stdio.h>
/*
Binary Search
The binary search algorithm is used for searching for a value in a sorted array (either in
ascending or descending order). To see how this algorithm works, assume that we are
searching for a value in an array sorted in ascending order:
Step 1: We use two variables, that is, start and end, which indicate the start and
the end of the part of the array, in which we are searching for the value. We use
the variable middle to calculate the middle position of that part: middle =
(start+end)/2. For example, if we have a sorted array of 100 integers, start
should be initialized to 0, end to 99, so middle becomes 49.
Step 2: We compare the value we are searching for against the middle element:
(a) If they are equal, then the searched value is found and the algorithm
terminates.
(b) If it is greater, the algorithm is repeated at the part of the array starting from
the middle position and up to the end. Therefore, start becomes start =
middle+1 and the algorithm goes back to Step 1.
(c) If it is less, the algorithm is repeated at the part of the array starting from
the start position and up to the middle. Therefore, end becomes end =
middle−1 and the algorithm goes back to Step 1.
In short, the binary search algorithm divides the array into two parts. Then, the searched
value is compared with the middle element and the same process is repeated in the respective part.
*/

/*
 * Write a function that searches for a number in an array of integers. If the number
is stored, the function should return the position of its first occurrence, otherwise
−1. Write a program that declares an array of integers sorted in ascending order.
The program should read an integer and use the function to display its array
position.
 */
int binary_search(int arr[], int size, int num);

int main()
{
	int num, pos, arr[] = {10, 20, 30, 40, 50, 60, 70}; 

	printf("Enter number to search: ");
	scanf("%d", &num);

	pos = binary_search(arr, sizeof(arr)/sizeof(int), num);
	if(pos == -1)
		printf("%d isn’t found\n", num);
	else
		printf("%d is found in position %d\n", num, pos);
	return 0;
}

int binary_search(int arr[], int size, int num)
{
	int start, end, middle;

	start = 0;
	end = size - 1;
	while(start <= end)
	{
		middle = (start + end)/2;

		if(num < arr[middle])
			end = middle - 1;
		else if(num > arr[middle])
			start = middle + 1;
		else
			return middle;
	}
	return -1; /* If the execution reaches this point means that the number was not found. */
}
