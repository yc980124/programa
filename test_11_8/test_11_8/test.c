#include <stdio.h>
#include <string.h>

void sort(char(*arr)[20])   //因为这里要一行一行的输出，所以不能用char* arr[20],因为这样的话只能送过来首地址
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <4-i; j++)
		{
			char temp[20];
			if (strcmp(arr[j], arr[j + 1]) >0)
			{
				strcpy(temp, arr[j + 1]);
				strcpy(arr[j + 1], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}

}

int main()
{
	char arr[5][20];
	int i = 0;
	printf("请输入你需要排序的字符：>");
	for (i = 0; i < 5; i++)
	{
		scanf("%s", &arr[i]);
	}
	sort(arr);
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i]);
	}

	return 0;
}