#include<stdio.h>

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。

int Is_Prime(int num)
{
	for (int j = 2; j < num; j++)
	{
		if (num%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	for (int i = 100; i < 200; i++)
	{
		int ret = Is_Prime(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}