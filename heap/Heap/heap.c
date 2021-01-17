#include "heap.h"


// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n)
{	
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	memcpy(hp->_a, a, sizeof(HPDataType)*n);
	hp->_size = n;
	hp->_capacity = n;

	// ������
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(hp->_a, hp->_size,i);
	}
}
// �ѵ�����
void HeapDestory(Heap* hp)
{
	assert(hp);

	free(hp->_a);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;
}
// �ѵĲ���,�����������룬��Ϊ�����飬��ǰ��Ļ���ϵ��ȫ���ˣ����ӱ��ֵ�
void HeapPush(Heap* hp, HPDataType x)
{	
	assert(hp);
	// �ռ䲻���Ļ�����
	if (hp->_size == hp->_capacity)
	{
		hp->_capacity *= 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->_a, sizeof(HPDataType)*hp->_capacity);
		hp->_a = tmp;
	}
	hp->_a[hp->_size++] = x;  //size=10,size++�����ݸ�����Ϊ11
	AdjustUp(hp->_a, hp->_size, hp->_size - 1);

}
// �ѵ�ɾ��,ɾ���Ѷ�������
void HeapPop(Heap* hp)
{	
	assert(hp);
	assert(hp->_size > 0);

	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);  // ������һ�������һ��
	hp->_size--;

	AdjustDown(hp->_a, hp->_size, 0);
}
// ��ȡ�Ѷ�����
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
// ���µ����㷨
void AdjustDown(HPDataType* a, int n, int root)
{
	int parent = root;  // ��һ���±�4
	int child = parent * 2 + 1;   // �±�9

	while (child < n)
	{
		// �ж����Һ���˭��С
		if (child + 1 < n && a[child] > a[child + 1])
		{
			++child;
		}

		// �������С�ڸ��ף��ͽ���
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			// ����С�ں��ӣ����轻��������С��Ҫ��
			break;
		}
	}
}
// ���ϵ����㷨
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