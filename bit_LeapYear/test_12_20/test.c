#include <stdio.h>


//ʵ�ֺ����ж�year�ǲ������ꡣ

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
	printf("����������:>");
	scanf("%d", &yearnum);
	int ret = LeapYear(yearnum);
	if (ret == 1)
		printf("������\n");
	else
		printf("��������\n");
	return 0;
}