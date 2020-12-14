
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。


void rotate(int* nums, int numsSize, int k)
{
	int tmp, prev;
	while (k--)
	{
		prev = nums[numsSize - 1];
		for (int i = 0; i<numsSize; ++i)
		{
			tmp = nums[i];
			nums[i] = prev;
			prev = tmp;
		}
	}
}