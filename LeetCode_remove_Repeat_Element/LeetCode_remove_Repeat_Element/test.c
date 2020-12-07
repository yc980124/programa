#include <stdio.h>

//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize == 0)
		return 0;
	int i = 0;
	for (int j = 0; j < numsSize; ++j)
	{
		if (nums[j] != nums[i])
		{
			i++;
			nums[i] = nums[j];
		}
	}
	return i + 1;
}

int main()
{
	int nums[] = { 1, 2, 2, 5, 5, 6 };  //顺序数组
	int size = sizeof(nums) / sizeof(nums[0]);
	int newlen = removeDuplicates(nums, size);
	printf("newlen = %d\n", newlen);
	return 0;
}