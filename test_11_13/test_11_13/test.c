#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//   sizeof �� strlen �Ĳ���

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


//  ����Ļ�����9*9�˷��ھ���
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



//   ����ϿεĲ�������Ϸ
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
			printf("�ף���������±�:>");
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
		printf("�ף���������±�:>");
		scanf("%d", &key);
		if (arr[key] < arr[mid])
		{
			printf("��С��\n");
			high = high / 2;
		}
		if (arr[key] > arr[mid])
		{
			printf("�´���\n");
			low = low / 2;
		}
		if (key == mid)
			break;
	}
	printf("��ϲ�㣬�¶��ˣ�");
	return 0;
}*/



//   ����ϿεĲ�������Ϸ


//int main()
//{
//	int guess = 0;
//	srand((int)time(NULL));
//	int random = rand()%100;
//	/*printf("��Ҫ�µ������� : %d\n", random);*/         
//	/*printf("%d\n", random);*/
//	/*int arr[] = { 1, 7, 9, 45, 3, 98, 0, 54, 11, 12 };*/
//	
//	while (guess != random)
//	{
//		printf("�������������:>");
//		scanf("%d", &guess);
//		if (guess > random)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < random)
//		{
//			printf("��С��\n");
//		}
//	}
//	printf("��ϲ�㣬��µ�����%d,�¶���!!!!??�c(�㨌��)��?\n", guess);
//	return 0;
//}


//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

int main()
{
	int find = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int low = 0;
	int high = sz;
	printf("�����������ҵ�����:>");
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
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (low > high)
	{
		printf("δ�ҵ�\n");
	}
	
	return 0;
}