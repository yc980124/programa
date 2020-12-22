#include <stdio.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
int main()
{
	int row_num = 0;
	printf("请输入行数:>");
	scanf("%d", &row_num);
	int result = 0;
	for (int i = 1; i <= row_num; ++i)  //行数
	{
		for (int j = 1; j <= i; ++j)
		{
			result = j*i;
			printf("%2d*%-2d =%-3d ", j, i, result);
		}
		printf("\n");
	}
	return 0;
}