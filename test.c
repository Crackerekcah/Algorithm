//1. �����������α�����ֵ��������ֵ�����ݽ��н���

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






//2. ����������ʱ���������������������ݣ�������)

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




//3.��10 �����������ֵ

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[10];
//	int max = a[0];
//	int i;
//	printf("������ʮ�����֣�\n");
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
//	printf("ʮ������������Ϊ%d\n", max);
//
//	system("pause");
//	return 0;
//}


//4.�����������Ӵ�С���

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
//	printf("������ʮ�����֣�\n");
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
//	printf("ʮ�����ְ�˳����Ϊ:\n");
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


//5.�������������Լ��

//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a, b;
//	int i = 0;
//	int div = 1;
//	printf("��������������:\n");
//	scanf("%d %d", &a, &b);
//	int less = a > b ? b : a;
//	for (i = 2; i <= less; ++i)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			div = i;
//		}
//	}
//	printf("%d �� %d �����Լ��Ϊ %d\n", a, b, div);
//	system("pause");
//	return 0;
//}