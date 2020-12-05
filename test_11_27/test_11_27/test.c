#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define ROW 5
#define COL 5
typedef struct Str
{
	int a;
	int arr[0];
}Str;

int main()
{
	
	int **ptr = (int **)malloc(sizeof(int *)*ROW);
	if (ptr == NULL)
	{
		return;
	}
	for (int i = 0; i < ROW; ++i)
	{
		ptr[i] = (int *)malloc(sizeof(int)*COL);
	}
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			ptr[i][j] = i + j;
		}
	}
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



//   ģ��ʵ��memcpy
/*
void *my_memcpy(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *Dest = (char *)dest;
	const char *Src = (const char *)src;

	while (count-- > 0)
	{
		*Dest++ = *Src++;
	}
	//*Dest = '\0';
}

int main()
{
	char str1[] = "hello";
	char *str2 = "bit.aaa";
	memcpy(str1, str2,3);
	printf("%s\n", str1);    //memcpy��������������Ŀ�Ĵ���\0
	return 0;
}


//   ģ��ʵ��memmove
//   void *memmove( void *dest, const void *src, size_t count );
/*
void *my_memmove(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *str1 = (char *)dest;
	const char *str2 = (const char *)src;
	if (str1 > str2  && str1<str2+count )   //�����ص�
	{
		str2 = str2 + count - 1;
		str1 = str1 + count - 1;
		while (count-- > 0)
		{
			*str1-- = *str2--;
		}
	}
	else 
		while (count-- > 0)
		{
		*str1++ = *str2++;
		}
}
int main()
{
	char str1[] = { "abcdefghijk" };
	char *str2 = "oooooo";
	my_memmove(str1+4, str1+1,3);
	printf("%s\n", str1);
	return 0;
}
*/


//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
/*
int find_num(int arr[][3], int row, int col, int n)
{
	int i = 0;
	int j = col - 1;
	while (j >= 0 && i<row)
	{
		if (n == arr[i][j])
		{
			//printf("�ҵ��ˣ��±���:%d %d\n", i, j);
			return 1;
		}
		else if (n > arr[i][j + 2])
			i++;
		else
			j--;
	}
	return 0;
}
int main()
{
	int arr[][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int input = 0;
	printf("������������ҵ�����:>");
	scanf("%d", &input);
	int ret = find_num(arr, 3, 3, input);
	if (ret == 1)
		printf("found\n");
	else
		printf("not found\n");
	return 0;
}

/*
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int input = 0;
	printf("������������ҵ�����:>");
	scanf("%d",&input);
	int i = 0;
	int j = 2;
	while (1)
	{
		if (input == arr[i][j])
		{
			printf("�ҵ��ˣ��±���:%d %d", i, j);
			break;
		}
		else if (input > arr[i][j + 2])
			i++;
		else
			j--;
	}
	return 0;
}
*/