
//����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����


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