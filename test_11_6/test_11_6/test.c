#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char arr[5][3] = { "abc", "def", "aaa", "mmm", "ccc" };
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (strcmp(arr[i],arr[j+1]) > 0)
//			{
//				char temp[20];
//				strcpy(temp, arr[i][j]);
//				strcpy(arr[i][j], arr[i][j + 1]);
//				strcpy(arr[i][j + 1], temp);
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%s\n", arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr[5][20] = { "abc", "def", "aaa", "mmm", "ccc" };
//	int i = 0;
//	int j = 0;
//    for(j = 0; j < 4; j++)   //  ��һ��ȽϽ���ǣ�  abc,aaa,def,ccc,mmm
//		                     //  �ڶ���ȽϽ���ǣ�  aaa,abc,ccc,def,mmm
//							 //������˵ֻ��Ҫ������Ϳ��Եõ���ȷ�Ľ�������Ǳ���ֻ�����Ρ�
//							 //��ô��Ҫ���ٴ��أ�����Ҫ�ȶԵ�����-1�����⼴5-1=4.
//    {
//		for (i = 0; i < 4; i++)
//		{
//			char temp[20] ;
//			if (strcmp(arr[i], arr[i + 1]) > 0)
//			{
//				strcpy(temp, arr[i]);
//				strcpy(arr[i], arr[i+1]);
//				strcpy(arr[i+1], temp);
//			}
//		
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//			printf("%s\n", arr[i]);
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>

void sort1(char(*arr)[20])
{
	int i, j;
	
	//ð������ 
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<4 - i; j++)
		{
			char temp[20];
			if (strcmp(arr[j], arr[j + 1])>0)
			{
				strcpy(temp, arr[j + 1]);
				strcpy(arr[j + 1], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
}


int main(){ 
	//��ά�������� 
	int i;
	char arr[5][20];
	for (i = 0; i<5; i++){
		scanf("%s", arr[i]);
	}
	sort1(arr);
	for (i = 0; i<5; i++){
		printf("%s\n", arr[i]);
	}
	return 0;
}

