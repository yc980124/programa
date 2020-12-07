﻿#include <stdio.h>
#include <assert.h>

//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。


int removeElement(int* nums, int numsSize, int val)
{
	if (numsSize == 0)
		return 0;
	int i = 0;
	for (int j = 0; j < numsSize; ++j)
	{
		if (nums[j] != val)
		{
			nums[i] = nums[j];
			i++;
		}
	}
	return i;
}


//  自己写的，没有实现原地删除，只是把数组中不同数字的数量返回
/*
int removeElement(int* nums, int numsSize, int val)
{
	//assert(nums);
	int tmp = numsSize;
	for (int i = 0; i < numsSize; ++i)
	{
		if (nums[i] == val)
		{
			tmp--;
		}
	}
	return tmp;
}*/

int main()
{
	int nums[] = { 3, 2, 2, 3 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int val = 3;
	int newlen = removeElement(nums, size, val);
	printf("newlen = %d\n", newlen);
	return 0;
}