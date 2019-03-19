#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"BubbleSort.h"



void BubbleSort(int* array, int lenth, Comp comp)
{
	//[0,bound)����������
	//[bound,lenth)δ��������
	for (int bound = 0; bound < lenth; ++bound)
	{
		int order = 0;
		for (int cur = lenth - 1; cur > bound; --cur)
		{
			//���������ڵ��������ַ��ϱȽϹ���ͽ���
			if (comp(array[cur - 1] , array[cur]))
			{
				Swap(&array[cur - 1], &array[cur]);
				order = 1;
			}
		}
		if (order == 0)
		{
			return;
		}
	}
}


//��������
int Less(int a, int b)
{
	return a > b ? 1 : 0;
}

//��������
int Greater(int a, int b)
{
	return a < b ? 1 : 0;
}

//����Ԫ�صľ���ֵ��������
int AbsLess(int a, int b)
{
	return abs(a) > abs(b) ? 1 : 0;
}

void Swap(int* a, int* b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

void Print(int* array,int lenth)
{
	for (int i = 0; i < lenth; ++i)
	{
		printf("%d ", array[i]);
	}
}



