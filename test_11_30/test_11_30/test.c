#include <stdio.h>
#include <stdlib.h>
#include <vld.h>
#include <string.h>




/*
#define ROW 5
#define COL 5
int main()
{
	int **par = (int **)malloc(sizeof(int*)*ROW);
	if (NULL == par)
		return;

	for (int i = 0; i < ROW; ++i)
	{
		//for (int j = 0; j < COL; ++j)
		//{
		//par[i][j] = i + j;
		//}
		*(par + i) = (int*)malloc(sizeof(int*)*ROW);
		//par[i] = (int*)malloc(sizeof(int*)*ROW);
	}
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			//par[i][j] = i + j;
			*(*(par + i) + j) = i + j;
		}
	}
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			//printf("%d ", par[i][j]);
			printf("%d ", *(*(par+i)+j));
		}
		printf("\n");
	}
	for (int i = 0; i < ROW; ++i)
		free(par[i]);
	free(par);
	return 0;
}
*/

/*
typedef struct Test
{
	char a;
	double b;
	int c;
	char ptr[0];   //柔性数组成员  
}Test;

int main()
{
	//printf("%d\n", sizeof(Test));
	char str[] = "hello bit";
	Test *pt = (Test *)malloc(sizeof(Test)+strlen(str) + 1);  // +1为了给\0留位置
	if (NULL == pt)
		return;
	strcpy(pt->ptr, str);
	printf("%s\n", pt->ptr);
	free(pt);
	return 0;
}
*/

/*
typedef struct Test
{
	char a;
	double b;
	int c;
	//char ptr[0];   //柔性数组成员
	char *ptr;
}Test;

int main()
{
	//printf("%d\n", sizeof(Test));
	char str[] = "hello bit";
	Test *pt = (Test *)malloc(sizeof(Test));  // +1为了给\0留位置
	if (NULL == pt)
		return;
	pt->ptr = (char *)malloc(strlen(str) + 1);
	strcpy(pt->ptr, str);
	printf("%s\n", pt->ptr);
	free(pt);   //只是释放了pt这个空间，而ptr所指向的另一个空间，ptr丢失，空间的指针消失，造成内存泄漏
	return 0;
}
*/

/*
typedef struct Test
{
	char a;
	double b;
	int c;
	//char ptr[0];   //柔性数组成员
	char *ptr;
}Test;

int main()
{
	//printf("%d\n", sizeof(Test));
	char str[] = "hello bit";
	Test *pt = (Test *)malloc(sizeof(Test)+strlen(str) + 1);  // +1为了给\0留位置
	if (NULL == pt)
		return;
	strcpy(pt->ptr, str);
	printf("%s\n", pt->ptr);
	free(pt);
	return 0;
}
*/

/*
void GetMemory(char **p, int num)  //传址操作
{
	*p = (char *)malloc(num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
void main()
{
	Test();
}
*/

/*
void Getmemory(char *p)   //str本身就是指针，这里拿指针接受它，相当于传值操作
{
	p = (char *)malloc(100);
}

int main()
{
	char *str = NULL;
	Getmemory(str);        // 传值操作,
	strcpy(str, "hello world");
	printf(str);
	return 0;
}
*/

/*
int main()
{

	//代码1
	//int num = 0;
	//scanf("%d", &num);
	//int arr[num] = { 0 };                                         
	//代码2
	int* ptr = (int*)calloc(10,sizeof(int));
	if (NULL == ptr)   //  判断ptr指针是否为空
		return;
	
	for (int i = 0; i<10; i++)
	{
		//*(ptr + i) = 0;
		ptr[i] = i + 1;
	}
	for (int i = 0; i<10; i++)
	{
		//*(ptr + i) = 0;
		printf("%d ", ptr[i]);
	}
	printf("\n");
	ptr =(int *) realloc(ptr, sizeof(int)*20);
	for (int i = 10; i<20; i++)
	{
		//*(ptr + i) = 0;
		ptr[i] = i + 1;
	}
	for (int i = 0; i<20; i++)
	{
		//*(ptr + i) = 0;
		printf("%d ", ptr[i]);
	}
	printf("\n");
	free(ptr);//释放ptr所指向的动态内存
	ptr = NULL;//是否有必要？
	return 0;
}
*/


/*
int main()
{
	
		//代码1
		int num = 0;
		scanf("%d", &num);
		//int arr[num] = { 0 };                                         
		//代码2
		int* ptr = (int*)malloc(num*sizeof(int));
		if (NULL == ptr)   //  判断ptr指针是否为空
			return;
		for (int i = 0; i<num; i++)
		{
				//*(ptr + i) = 0;
			ptr[i] = i+1;
		}
		for (int i = 0; i<num; i++)
		{
			//*(ptr + i) = 0;
			printf("%d ", ptr[i]);
		}
		free(ptr);//释放ptr所指向的动态内存
		ptr = NULL;//是否有必要？
		return 0;
}
*/