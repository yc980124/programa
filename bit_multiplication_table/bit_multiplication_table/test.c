#include <stdio.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
int main()
{
	int row_num = 0;
	printf("����������:>");
	scanf("%d", &row_num);
	int result = 0;
	for (int i = 1; i <= row_num; ++i)  //����
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