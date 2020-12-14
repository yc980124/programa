#include <stdio.h>

//对于非负整数 X 而言，X 的数组形式是每位数字按从左到右的顺序形成的数组。例如，如果 X = 1231，那么其数组形式为 [1, 2, 3, 1]。
//给定非负整数 X 的数组形式 A，返回整数 X + K 的数组形式。
//示例 1：
//输入：A = [1, 2, 0, 0], K = 34
//输出：[1, 2, 3, 4]
//解释：1200 + 34 = 1234

//输入：A = [2, 1, 5], K = 806
//输出：[1, 0, 2, 1]
//解释：215 + 806 = 1021


int* addToArrayForm(int* A, int ASize, int K, int* returnSize){

	//先判断需要开辟空间的大小

	int Ksize = 0;

	int Knum = K;

	while (Knum > 0)

	{

		Knum %= 10;

		Ksize++;

	}

	int n = ASize>Ksize ? ASize : Ksize;

	int* retArr = (int *)malloc(sizeof(int)*(n + 1));

	//相加

	int Ai = ASize - 1;    // 数组A最后一个数的下标



	int nextnum = 0;     // 进位

	int reti = 0;       //开辟数组的第一个数的下标

	while (n-- > 0)

	{

		int a = 0;   // 存放A数组中的一个数

		if (Ai >= 0)

		{

			a = A[Ai];

			Ai--;

		}

		int ret = K % 10 + a + nextnum;

		K /= 10;



		if (ret > 9)

		{

			nextnum = 1;

			ret -= 10;

		}

		else

		{

			nextnum = 0;

		}

		retArr[reti] = ret;

		reti++;

	}

	if (nextnum == 1)

	{

		retArr[reti] = 1;

		reti++;

	}

	int left = 0;

	int right = reti - 1;

	while (left < right)

	{

		int tmp = retArr[left];

		retArr[left] = retArr[right];

		retArr[right] = tmp;

		left++;

		right--;

	}

	*returnSize = reti;

	return retArr;

}

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
/*
int* addToArrayForm(int* A, int Asize, int K, int* returnsize)
{
	if (A == NULL || K == 0)
	{
		*returnsize = Asize;
		return A;
	}
	int Ksize = 0;   
	while (K != 0)
	{
		K / 10;
		Ksize++;    //循环结束 Ksize = 3
	}
	*returnsize = Ksize > Asize ? Ksize + 1 : Asize + 1;
	int* retArr =(int *) malloc(sizeof(int)*(*returnsize));  
}

int main()
{
	int A[] = { 2, 1, 5 };
	int size = sizeof(A) / sizeof(A[0]);
	int K = 806;
	int i = 0;
	//int Anum = A[i]*(size-2)*
	//int *retA[] = nalloc(sizeof(int));
	addToArrayForm(A, size, K, retA);
	return 0;
}
*/

