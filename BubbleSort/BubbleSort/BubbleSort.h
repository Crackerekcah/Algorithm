#pragma once


//Comp是一个函数指针类型，Comp对应的函数有两个参数 int，返回值也是int
typedef int(*Comp)(int a, int b);

void BubbleSort(int* array, int lenth, Comp comp);

void Print(int* array, int lenth);

int Less(int a, int b);

int Greater(int a, int b);

int AbsLess(int a, int b);

void Swap(int* a, int* b);
