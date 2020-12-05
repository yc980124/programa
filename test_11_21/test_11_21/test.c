#include<stdio.h>
#include<string.h>

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

void Swap(char *p1, char *p2)
{
	char tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void LeftRoll(char p[])
{
	int input = 0;
	int len = strlen(p);
	printf("请输入左旋几位:>");
	scanf("%d", &input);
	input =input%4;
	for (int i = 0; i < input; ++i)    //左旋几位
	{
		for (int j = 0; j < len-1; ++j)    //每趟换几次
		{
			Swap(&p[j], &p[j + 1]);
		}
	}
	printf("%s\n", p);
}

int main()
{
	char arr[] = { "ABCD" };
	LeftRoll(arr);
	return 0;
}

/*
char* RollStr( char *s1,int k)
{
	//char *p = s1;
	char tmp[9] = { NULL };
	char rec[5] = { NULL };
	strcpy(tmp, s1);
	strcat(tmp, s1);
	for (int i = k; i < k+4; ++i)
	{
		int num = 0;
		rec[num] = tmp[i];
		num++;
	}
	//strcpy(s1, tmp2);
	s1 = rec;
	printf("%s\n", s1);
	return s1;
}

int main()
{
	int k = 0;
	char s1[] = {"ABCD"};
	printf("请输入左旋几次(小于四次):>");
	scanf("%d", &k);
	//int sz = sizeof(s1) / sizeof(s1[0]);
	RollStr(s1,k);
	return 0;
}*/
