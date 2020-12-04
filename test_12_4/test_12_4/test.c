#include <stdio.h>

//   剑指 Offer 56 - I.数组中数字出现的次数

int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	int sum = 0;
	int key = 0 ;
	for (int i = 0; i < numsSize; ++i)
	{
		sum = sum^nums[i];
	}
	key = sum&(-sum);
	for (int j = 0; j < numsSize; ++j)
	{
		if ((key & nums[j]) == 0)
			returnSize[0] ^= nums[j];
		else
			returnSize[1] ^= nums[j];
	}
	return returnSize;
}
int main()
{
	int nums[] = { 1, 2, 10, 4, 1, 4, 3, 3 };
	/*int ret[2] = { 0, 0 };
	int *retnums = ret;*/
	int *retnums[2] = { 0, 0 };  //数组指针才能接收函数返回的数组地址
	int size = sizeof(nums) / sizeof(nums[0]);
	singleNumbers(nums, size, retnums);  
	printf("[%d,%d] ", retnums[0], retnums[1]);
	return 0;
}