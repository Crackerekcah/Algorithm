#include<stdio.h>
#include<stdlib.h>

int Binary_Find(int* arr, int size, int num);

int main()
{
	int arr[10] = { 11,22,33,44,55,66,77,88,99,100 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int find = Binary_Find(arr, size, 44);
	printf("%d\n", find);

	system("pause");
	return 0;
}

int Binary_Find(int* arr, int size, int num)
{
	//需要查找的区间  [left,right]
	int left = 0;
	int right = size - 1;
	int result = -1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			result = mid;
			break;
		}
	}
	return result;
}



