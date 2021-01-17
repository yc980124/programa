#include "heap.h"

// ������
// �Ž��򣬽�С��
// �����򣬽����
void HeapSort(int* a, int n)
{
	// 1.����
	//for (int i = n - 1; i >= 0; ++i)
	// ʱ�临�Ӷȣ�
	// ��������N���ڵ㣬���߶ȣ�logN
	// Ҫע������ʱ�临�ӶȲ���N*logN������ʱ�临�Ӷ���O(N)

	// �����һ�����ڵ㴦�����ϵ���������Ҫ�Ĵ�ѻ�С�ѣ�������ÿ�����ڵ���˵�������µ�����
	// n-1���������һ�����±꣬��-1/2�����ĸ��ڵ��±�
	for (int i = (n - 1 - 1) / 2; i >= 0; i++)
	{
		AdjustDown(a, n, i);
	}
	// ÿ�ΰѶѶ����������һ������λ�ã����ҽ�����ֻ����n-1���������γɽ���
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		// �ټ���ѡ��С�ģ������Ѿ��Ѹ��ڵ��������������ΪС���ˣ�����ֱ�ӴӸ��ڵ㿪ʼ��
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