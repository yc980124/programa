#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<assert.h>



/*
дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 = AABCD��s2 = BCDAA������1
����s1 = abcd��s2 = ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC     */

/*
int IsRoll(char *s1, char *s2)
{
	assert(*s1 != NULL);
	assert(*s2 != NULL);

	if (strlen(s1) != strlen(s2))
		return 0;
	//char *tmp = (char *)malloc(/*sizeof(char)**/strlen(s1) * 2 + 1);  //���������ַ����Ŀռ䣬+1�Ǹ�\0��λ��
	char tmp[11] = { NULL };
	strcpy(tmp, s1);
	strcat(tmp, s1);
	//char *res = strstr(tmp, s2);
	return strstr(tmp,s2) != NULL;
}

int main()
{
	char *s1 = "AABCD";
	char *s2 = "BCDAA";
	int  ret = IsRoll(s1, s2);
	if (ret == 0)
		printf("No!!!\n");
	else
		printf("Yes!!!!\n");
	return 0;
}*/


/*
bool IsRoll(char *s1, char *s2)
{
	assert(*s1 != NULL);
	assert(*s2 != NULL);

	if (strlen(s1) != strlen(s2))
		return false;
	char *tmp = (char *)malloc(sizeof(char)*strlen(s1)* 2+1);  //���������ַ����Ŀռ䣬+1�Ǹ�\0��λ��
	strcpy(tmp, s1);
	strcat(tmp, s1);
	char *res=strstr(tmp, s2);
	free(tmp);
	return res;
}

int main()
{
	char *s1 = "AABCD";
	char *s2 = "BCDAa";
	bool ret = IsRoll(s1,s2);
	if (ret == NULL)
		printf("No!!!\n");
	else
		printf("Yes!!!!\n");
	return 0;
}*/


/*
int my_cmp(const void *p1, const void *p2)
{
	//const char **pa = (const char **)p1;
	//const char **pb = (const char **)p2;
	//return strcmp(*(char **)p1, *(char**)p2);
	return strcmp(*(char **)p1, *(char **)p2);
}

void my_swap(void *p1, void *p2, int n)
{
	for (int i = 0; i < n; ++i)
	{
		char tmp = *((char *)p1+i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}

void my_qsort(void *arr[], int sz, int size, int(*cmp)(void *a, void *b))
{
	for (int i = 0; i < sz-1; ++i)
	{
		for (int j = 0; j < sz - i - 1; ++j)
		{
			if (cmp((char *)arr + j*size, (char *)arr + (j + 1)*size) > 0)
			{
				my_swap((char *)arr + j*size, (char *)arr + (j + 1)*size, size);
			}
		}
	}
}

int main()
{
	char *arr[] = { "bgh", "fgt", "abc", "adt", "kfc" };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(char*), my_cmp);
	for (int i = 0; i < sz; ++i)
	{
		printf("%s ", arr[i]);
	}
	printf("\n");
	
	return 0;
}*/



/*
char cmp_arr(const void *p1,const void *p2)
{
	//const char **pa = (const char **)p1;
	//const char **pb = (const char **)p2;
	return strcmp(*(char **)p1, *(char**)p2);
	//return strcmp(*(char *)p1 , *(char *)p2);
}

int main()
{
	//int arr[] = { 7, 0, 4, 5, 3, 2, 1, 8, 9, 6 };
	char *arr[] = { "kfc","abc", "edf",};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(char*), cmp_arr);
	for (int i = 0; i < sz; ++i)
	{
		printf("%s ", arr[i]);
	}
	printf("\n");
	return 0;
}*/