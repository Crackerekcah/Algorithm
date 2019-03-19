#include<stdio.h>
#include<stdlib.h>
#include"BubbleSort.h"

int main()
{
	int arr[8] = { 1,4,5,7,8,3,2,6 };
	int lenth = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, lenth, Less);
	Print(arr, lenth);

	system("pause");
	return 0;
}