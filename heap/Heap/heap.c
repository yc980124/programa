#include "heap.h"


// 堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n)
{	
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	memcpy(hp->_a, a, sizeof(HPDataType)*n);
	hp->_size = n;
	hp->_capacity = n;

	// 构建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(hp->_a, hp->_size,i);
	}
}
// 堆的销毁
void HeapDestory(Heap* hp)
{
	assert(hp);

	free(hp->_a);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;
}
// 堆的插入,在数组最后插入，因为是数组，插前面的话关系就全乱了，父子变兄弟
void HeapPush(Heap* hp, HPDataType x)
{	
	assert(hp);
	// 空间不够的话增容
	if (hp->_size == hp->_capacity)
	{
		hp->_capacity *= 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->_a, sizeof(HPDataType)*hp->_capacity);
		hp->_a = tmp;
	}
	hp->_a[hp->_size++] = x;  //size=10,size++后数据个数就为11
	AdjustUp(hp->_a, hp->_size, hp->_size - 1);

}
// 堆的删除,删除堆顶的数据
void HeapPop(Heap* hp)
{	
	assert(hp);
	assert(hp->_size > 0);

	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);  // 交换第一个与最后一个
	hp->_size--;

	AdjustDown(hp->_a, hp->_size, 0);
}
// 获取堆顶数据
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	assert(hp->_size > 0);

	return hp->_a[0];
}

void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}
// 向下调整算法
void AdjustDown(HPDataType* a, int n, int root)
{
	int parent = root;  // 第一个下标4
	int child = parent * 2 + 1;   // 下标9

	while (child < n)
	{
		// 判断左右孩子谁更小
		if (child + 1 < n && a[child] > a[child + 1])
		{
			++child;
		}

		// 如果孩子小于父亲，就交换
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			// 父亲小于孩子，无需交换，满足小堆要求
			break;
		}
	}
}
// 向上调整算法
void AdjustUp(HPDataType* a, int n, int child)
{
	int parent = (child - 1) / 2;

	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}