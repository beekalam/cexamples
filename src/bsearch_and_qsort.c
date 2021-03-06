#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int compare(const void *elem1, const void *elem2);

int main()
{
	int *pos, i, arr[NUM];

	for(i = 0; i < NUM; i++)
	{
		printf("Enter number: ");
		scanf("%d", &arr[i]);
	}
	qsort(arr, NUM, sizeof(int), compare);
	
	printf("\nSorted array: ");
	for(i = 0; i < NUM; i++)
		printf("%d ", arr[i]);

	printf("\n\nEnter number to search: ");
	scanf("%d", &i);

	pos = (int*)bsearch(&i, arr, NUM, sizeof(int), compare);

	if(pos == NULL)
		printf("\n%d isn�t found\n", i);
	else
		printf("\n%d is in %d position\n", i, pos-arr+1);
	return 0;
}

int compare(const void *elem1, const void *elem2)
{
	if(*(int*)elem1 < *(int*)elem2)
		return -1;
	else if(*(int*)elem1 > *(int*)elem2)
		return 1;
	else
		return 0;
}