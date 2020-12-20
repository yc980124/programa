#include <stdio.h>


//实现函数判断year是不是润年。

int LeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int yearnum = 0;
	printf("请输入年数:>");
	scanf("%d", &yearnum);
	int ret = LeapYear(yearnum);
	if (ret == 1)
		printf("是闰年\n");
	else
		printf("不是闰年\n");
	return 0;
}