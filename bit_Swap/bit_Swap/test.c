#include <stdio.h>

//ʵ��һ��������������������������

//��ָ��ʵ��
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