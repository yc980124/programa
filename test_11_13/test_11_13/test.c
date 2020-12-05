#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//   sizeof 和 strlen 的测试

//int main()
//{
//	char pa[] = { 'a','b','c' };
//	char *pb = "abc";
//	printf("%d\n", strlen(pa));
//	printf("%d\n", strlen(pb));
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pb));
//
//	return 0;
//}


//#define SIZE 5
//int main()
//{
//	int values[SIZE];
//	int *pv;
//	for (pv = &values[0]; pv < &values[SIZE]; pv++)
//	{
//		*pv = 1;
//	}
//	return 0;
//}


//  在屏幕上输出9*9乘法口诀表
//
//int main()
//{
//	int i = 0;
//	int row = 1;
//
//	while (row < 10)
//	{
//		for (i = 1; i < row + 1; ++i)
//		{
//				printf("%d*%d =%-2d ", i,row, i*row);
//		}
//		row++;
//		printf("\n");
//	}
//	
//	return 0;
//}



//   完成上课的猜数字游戏
/*
int game(int *arr,int n, int select)
{
	int key = 0;
	int low = arr;
	int high = arr[n];
	int mid = (n - 1) / 2;
	while (select != 0)
	{
		while (low < high)
		{
			printf("亲，输入你的下标:>");
			scanf("%d", &key);
			if (arr[key] < arr[mid])
			{
				high = high / 2;
			}
			if (arr[key] > arr[mid])
			{
				low = low / 2;
			}
			if (arr[key] = arr[mid])
			{
				return key;
			}
		}
		
	}
}

void menu()
{
	printf("******************************\n");
	printf("**  1. play        0. exit  **\n");
	printf("******************************\n");
}

int main()
{
	int select = 0;
	int arr[] = { 1, 4, 6, 7, 9, 34, 56, 37, 89, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int low = 0;
	int high = sz-1;
	
	menu();
	int ret=game(arr,sz,select);
	printf("%d\n", arr[ret]);
	/*while (low <= high)
	{
		int key = 0;
		int mid = (low + high) / 2;
		printf("亲，输入你的下标:>");
		scanf("%d", &key);
		if (arr[key] < arr[mid])
		{
			printf("猜小了\n");
			high = high / 2;
		}
		if (arr[key] > arr[mid])
		{
			printf("猜大了\n");
			low = low / 2;
		}
		if (key == mid)
			break;
	}
	printf("恭喜你，猜对了！");
	return 0;
}*/



//   完成上课的猜数字游戏


//int main()
//{
//	int guess = 0;
//	srand((int)time(NULL));
//	int random = rand()%100;
//	/*printf("你要猜的数字是 : %d\n", random);*/         
//	/*printf("%d\n", random);*/
//	/*int arr[] = { 1, 7, 9, 45, 3, 98, 0, 54, 11, 12 };*/
//	
//	while (guess != random)
//	{
//		printf("请输入你的数字:>");
//		scanf("%d", &guess);
//		if (guess > random)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < random)
//		{
//			printf("猜小了\n");
//		}
//	}
//	printf("恭喜你，你猜的数字%d,猜对了!!!!??ヽ(°▽°)ノ?\n", guess);
//	return 0;
//}


//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

int main()
{
	int find = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int low = 0;
	int high = sz;
	printf("请输入你想找的数字:>");
	scanf("%d", &find);
	while (low <= high)
	{
		int mid = (low + high) / 2;
		
		if (arr[mid] < find)
		{
			low = mid + 1;
		}
		if (arr[mid] > find)
		{
			high = mid - 1;
		}
		if (arr[mid] == find)
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (low > high)
	{
		printf("未找到\n");
	}
	
	return 0;
}