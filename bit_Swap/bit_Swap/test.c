#include <stdio.h>

//实现一个函数来交换两个整数的内容

//用指针实现
void Swap(int *pa, int *pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 66;
	int b = 99;
	Swap(&a, &b);
	printf("a =%d , b =%d\n", a, b);
	return 0;
}