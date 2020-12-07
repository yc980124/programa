#include <stdio.h>

//����һ���������飬����Ҫ�� ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�

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
	int nums[] = { 1, 2, 2, 5, 5, 6 };  //˳������
	int size = sizeof(nums) / sizeof(nums[0]);
	int newlen = removeDuplicates(nums, size);
	printf("newlen = %d\n", newlen);
	return 0;
}