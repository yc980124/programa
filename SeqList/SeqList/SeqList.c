#include "SeqList.h"


void SeqListInit(SL* ps)
{
	/*ps->size = 0;
	ps->capacity = 0;
	ps->a = NULL;*/
	ps->a = (SLDataType*)malloc(sizeof(SLDataType)* 4);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

void SeqListPrint(SL* ps)
{
	assert(ps != NULL);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListExpand(SL* ps)
{
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType)*ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ�ܣ�\n");
			exit(-1);
		}
	}
}


//  β��βɾ   ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x)
{
	/*assert(ps != NULL);
	
	ps->a[ps->size] = x;
	ps->size++;
	SeqListExpand(ps);*/

	SeqListInsert(ps, ps->size, x);    //�����3��������±꣬Ҳ���������е��ĸ�λ�õ�ֵ

	
}
void SeqListPopBack(SL* ps)
{
	assert(ps);

	ps->size--;
	//ps->a[ps->size] = NULL;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);

	SeqListExpand(ps);
	int end = ps->size-1;
	while (end >= 0)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
	
}
void SeqListPopFront(SL* ps)
{
	assert(ps);

	int start = 0;
	while (start < ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
//  ����   ɾ��
void SeqListInsert(SL* ps, size_t pos, SLDataType x)
{
	assert(ps);
	assert(pos <= ps->size);

	SeqListExpand(ps);
	int  end = ps->size-1;
	while (end >= pos)
	{
		ps->a[end+1] = ps->a[end];
		end--;;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SL* ps, size_t pos)
{
	assert(ps);
	assert(pos < ps->size);

	int start = pos;
	while (pos < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
