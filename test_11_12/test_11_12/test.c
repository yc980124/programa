#include<stdio.h>

//  ��ӡ1000�굽2000��֮�������
/*
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}*/


//  дһ�����룺��ӡ100~200֮�������

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//  ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		j=i;
//		while (j != 0)
//		{
//			int tmp = j % 10;
//			if (tmp == 9)
//				count++;
//			j = j / 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		j = i;
//		while (j){
//			int number = j % 10;
//			if (number == 9){
//				count++;
//			}
//			j /= 10;
//		}
//	}
//	printf("1-100��9�ĸ�����%d\n", count);
//	system("pause");
//	return 0;
//}


//����1/1 -1/2 + 1/3 - 1/4 + 1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i < 101; ++i)
//	{
//		sum = sum +(flag*(1.0 / i));
//		flag = -flag;
//	}
//	printf("%f", sum);
//	return 0;
//}

//   ��10 �����������ֵ

int Is_Max_value(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; ++i)
	{
		if (arr[i] > arr[i + 1])
		{
			int tmp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = tmp;
		}
	}
	return arr[sz-1];
}
int main()
{
	int arr[] = { 2, 4, 5, 7, 8, 23, 89, 0, 34, 127 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max=Is_Max_value(arr, sz);
	printf("%d\n", max);
	return 0;
}