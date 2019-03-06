//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int i, j;
//	int count;
//	scanf("%d", &count);
//	for (j=1;j<=count;++j)
//	{
//		for (i = 1; i <= j; ++i)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (j = count - 1; j >= 1; --j)
//	{
//		for (i = 1; i <= j; ++i)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//2.求出0～999之间的所有“水仙花数”并输出
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int num = 100;
//	for (; num < 1000; ++num)
//	{
//		int hundred3 = (num / 100)*(num / 100)*(num / 100);
//		int decade3 = (num / 10 % 10)*(num / 10 % 10)*(num / 10 % 10);
//		int piece3 = (num % 10)*(num % 10)*(num % 10);
//		if (hundred3 + decade3 + piece3 == num)
//		{
//			printf("%d\n", num);
//		}
//	}
//	system("pause");
//	return 0;
//}


//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	double cur = a;
//	double sum = a;
//	for (int i = 1; i < 5; ++i)
//	{
//		cur = cur + a * pow(10,i);
//		sum = sum + cur;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}