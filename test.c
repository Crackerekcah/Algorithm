//1. 给定两个整形变量的值，将两个值的内容进行交换

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a, b, c;
//	a = 10;
//	b = 20;
//
//	c = a;
//	a = b;
//	b = c;
//	printf("%d,%d\n", a, b);
//	system("pause");
//	return 0;
//}






//2. 不允许创建临时变量，交换两个数的内容（附加题)

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	a = b - a;
//	b = b - a;
//	a = b + a;
//	printf("%d,%d\n", a, b);
//	system("pause");
//	return 0;
//}




//3.求10 个整数中最大值

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[10];
//	int max = a[0];
//	int i;
//	printf("请输入十个数字：\n");
//	for (i = 0; i < 10; ++i)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	printf("十个数中最大的数为%d\n", max);
//
//	system("pause");
//	return 0;
//}


//4.将三个数按从大到小输出

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int(*pfunc)(int, int);
//void Scanf(int* arr);
//void Swap(int*arr1, int* arr2);
//int More(int arr1, int arr2);
//void Print(int*arr, int size);
//void BubbleSort(int*arr, int size, pfunc comp);
//
//int main()
//{
//	int arr[10];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Scanf(arr);
//	BubbleSort(arr,size,More);
//	system("pause");
//	return 0;
//}
//
//void Scanf(int* arr)
//{
//	printf("请输入十个数字：\n");
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void Swap(int*arr1, int* arr2)
//{
//	int arr3 = 0;
//	arr3 = *arr1;
//	*arr1 = *arr2;
//	*arr2 = arr3;
//}
//
//int More(int arr1, int arr2)
//{
//	int res = 0;
//	if (arr2 > arr1)
//	{
//		res = 1;
//	}
//	return res;
//}
//
//void Print(int*arr, int size)
//{
//	printf("十个数字按顺序排为:\n");
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//
//void BubbleSort(int*arr, int size,pfunc comp)
//{
//	int bound = 0;
//	int cur = 0;
//	for (; bound < size; ++bound)
//	{
//		for (cur = size - 1; cur > bound; --cur)
//		{
//			if (comp(arr[cur - 1], arr[cur]))
//			{
//				Swap(&arr[cur - 1], &arr[cur]);
//			}
//		}
//	}
//	Print(arr, size);
//}


//5.求两个数的最大公约数

//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a, b;
//	int i = 0;
//	int div = 1;
//	printf("请输入两个数字:\n");
//	scanf("%d %d", &a, &b);
//	int less = a > b ? b : a;
//	for (i = 2; i <= less; ++i)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			div = i;
//		}
//	}
//	printf("%d 和 %d 的最大公约数为 %d\n", a, b, div);
//	system("pause");
//	return 0;
//}