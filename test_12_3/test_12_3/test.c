#include <stdio.h>


//   Ñ°ÕÒÏûÊ§µÄÊı×Ö
int missingNumber(int* nums, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += nums[i];
	int n = (size *(size+1))/2;
	return  n - sum;
}
int main()
{
	int nums[4] = { 1, 2, 4 };
	int size = sizeof(nums)/sizeof(nums[0]);
	int ret = missingNumber(nums, size);
	printf("%d\n", ret);
	return 0;
}

/*
int missingNumber(int* nums, int numsSize)
{
	int i = 0;

	while ((nums[i + 1] - nums[i]) > 0)
	{
		if ((nums[i + 1] - nums[i]) > 1)
			return (nums[i + 1] - nums[i])+1;
		else
			i++;
	}
	return 0;
}

void sort(int nums[],int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (nums[j] > nums[j+1])
			{
				int tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;
			}
		}
	}
}

int main()
{
	int nums[4] = {4,2,1};
	int size=4;
	sort(nums,size);
	int ret = missingNumber(nums,size);
	printf("%d\n", ret);
	return 0;
}
*/