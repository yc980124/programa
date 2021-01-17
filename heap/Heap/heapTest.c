#include "heap.h"

// 堆排序
// 排降序，建小堆
// 排升序，建大堆
void HeapSort(int* a, int n)
{
	// 1.建堆
	//for (int i = n - 1; i >= 0; ++i)
	// 时间复杂度？
	// 假设树有N个节点，树高度：logN
	// 要注意这里时间复杂度不是N*logN，他的时间复杂度是O(N)

	// 从最后一个父节点处，往上调成我们需要的大堆或小堆，但对于每个父节点来说又是向下调整的
	// n-1是数组最后一个数下标，再-1/2是它的父节点下标
	for (int i = (n - 1 - 1) / 2; i >= 0; i++)
	{
		AdjustDown(a, n, i);
	}
	// 每次把堆顶和数组最后一个数换位置，并且接下来只调整n-1个数，即形成降序
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		// 再继续选次小的，上面已经把根节点的左右子树调整为小堆了，所以直接从根节点开始调
		AdjustDown(a, end, 0);
		--end;
	}
}

int main()
{
	int a[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int size = sizeof(a) / sizeof(a[0]);
	HeapSort(a, size);

	/*Heap hp;
	HeapCreate(&hp,a, size);
	HeapPush(&hp, 13);

	HeapDestory(&hp);
	*/
	return 0;
}