#pragma once


//Comp��һ������ָ�����ͣ�Comp��Ӧ�ĺ������������� int������ֵҲ��int
typedef int(*Comp)(int a, int b);

void BubbleSort(int* array, int lenth, Comp comp);

void Print(int* array, int lenth);

int Less(int a, int b);

int Greater(int a, int b);

int AbsLess(int a, int b);

void Swap(int* a, int* b);
