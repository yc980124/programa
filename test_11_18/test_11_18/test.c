#include<stdio.h>

//int main()
//{
//	int a = "abc";
//	printf("%d\n", sizeof(a));
//	return 0;
//}

int add(int a, int b) 
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a / b;
}

int main()
{
	int input = 1;
	int x, y;
	int ret = 0;
	int(*p[4])(int x, int y) = { add, sub, mul, div };
	while (input)
	{
		printf("****************************\n");
		printf("**   1. play     0. exit  **\n");
		printf("**   2. add      3. sub   **\n");
		printf("**   4. mul      5. div   **\n");
		printf("****************************\n");

		printf("请选择:>");
		scanf("%d", &input);
		if (input <= 5 && input >= 2)
		{
			printf("输入操作数:>");
			scanf("%d %d", &x, &y);
			ret = (*p[input-2])(x, y);
		}
		else
			printf("输入错误");
		printf("ret = %d\n", ret);
	} 
	return 0;
}


//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add ? ? ? ? ? 2:sub \n");
//		printf(" 3:mul ? ? ? ? ? 4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}