#include<stdio.h>

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������

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