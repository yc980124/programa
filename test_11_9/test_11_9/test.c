#include <stdio.h>

//【程序1】
//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去掉不满足条件的排列。

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i < 5; ++i)
//	{
//		for (j = 1; j < 5; ++j)
//		{
//			for (k = 1; k < 5; ++k)
//			{
//				if (i != j && i != k && j != k)
//				{
//					printf("%d%d%d\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//}

//【程序2】
//题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高于10万元，低于20万元时，
//低于10万元的部分按10%提成，高于10万元的部分，可可提成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时高于40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于100万元时，
//超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
//1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。
int main()
{

	return 0;
}

