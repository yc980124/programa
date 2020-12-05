

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//结果是啥？
//	return 0;
//}
#include <stdio.h>


//  递归求n！
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
	printf("请输入你想求的阶乘的值:>");
	scanf("%d", &n);
	int ret = fun(n);
	printf("n = %d \n", ret);
	return 0;
}*/


//给定两个数，求这两个数的最大公约数(自己写未成功)
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
//	printf("请输入你的值:>");
//	scanf("%d %d", &num1, &num2);
//	int ret = Gcd(num1,num2);
//	printf("%d\n", ret);
//	return 0;
//}


//给定两个数，求这两个数的最大公约数
int main()
{
	int num1 = 0;
	int num2 = 0;
	int tmp = 0;
	printf("请输入你的值:>");
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




















