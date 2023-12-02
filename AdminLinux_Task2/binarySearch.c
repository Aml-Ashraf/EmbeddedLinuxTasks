#include <stdio.h>

int binarySearch(int *array, int size, int num)
{
	int middle;
	int found = -1;
	int left = 0;
	int right = size - 1;
	while(left<=right)
	{
		middle = (left + right )/2;
		if(array[middle] == num)
		{
			found = middle;
			break;
		}
		else if(array[middle] < num)
		{
			left = middle+1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return found;
}
int main(void)
{
	int arr[] = {1,3,5,6,8,10};
	int num = 6;
	int size = 6;
	int found = binarySearch(arr,size,num);
	if(found == -1)
	{
		printf("number %d not found\n",num);
	}
	else
	{
		printf("number %d found in index [%d]\n",num,found);
	}
	return 0;
}
