

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//�����ɶ��
//	return 0;
//}
#include <stdio.h>


//  �ݹ���n��
/*
int fun(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fun(n - 1);  //
}

int main()
{
	int n = 0;
	printf("������������Ľ׳˵�ֵ:>");
	scanf("%d", &n);
	int ret = fun(n);
	printf("n = %d \n", ret);
	return 0;
}*/


//���������������������������Լ��(�Լ�дδ�ɹ�)
//int Gcd(int num1, int num2)
//{
//	int i = 0;
//	int tmp = 0;
//	int tmp1 = 0;
//	int tmp2 = 0;
//	for (i = 2; i < num1; ++i)
//	{
//		
//			
//		if (num1%i == 0)
//		{
//			 tmp1= i;
//		}
//	}
//	int j = 0;
//	for (j = 2; j < num2; j++)
//	{
//		
//		if (num2%j == 0)
//		{
//			tmp2 = j;
//		}
//	}
//	if (tmp1 == tmp2)
//	{
//		if (tmp1 < tmp2)
//			tmp = tmp2;
//		else
//			tmp = tmp1;
//	}
//	return tmp;
//}
//int main()
//{
//	int num1, num2;
//	printf("���������ֵ:>");
//	scanf("%d %d", &num1, &num2);
//	int ret = Gcd(num1,num2);
//	printf("%d\n", ret);
//	return 0;
//}


//���������������������������Լ��
int main()
{
	int num1 = 0;
	int num2 = 0;
	int tmp = 0;
	printf("���������ֵ:>");
	scanf("%d %d", &num1, &num2);
	if (num1 < num2)
	{
		int tmp = 0;
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	while (num2 != 0)
	{
		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}
	printf("%d\n", num1);
	return 0;
}




















