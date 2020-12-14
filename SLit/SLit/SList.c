#include "SList.h"

SListNode* BuySList(SLTDateType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("����ڵ�ʧ�ܣ�");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}


void SListPushBack(SListNode** pphead, SLTDateType x)
{
	SListNode* newNode = BuySList(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//��β
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}

void SListPopBack(SListNode** pphead)
{
	//1.��
	if (*pphead == NULL)
	{
		return;
	}
	//2.һ���ڵ�
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.һ���ڵ�����
	else
	{   //����˫ָ���Ŀ���ǣ��ͷ����һ���ڵ�֮�󣬿���ʹ��ǰһ���ڵ��nextָ��NULL
		SListNode* prev = NULL;  
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}

}

void SListPushFront(SListNode** pphead, SLTDateType x)
{
	SListNode* newNode = BuySList(x);

	newNode->next = *pphead;
	*pphead = newNode;
}

void SListPopFront(SListNode** pphead)
{
	//1.��
	if (*pphead == NULL)
	{
		return;
	}
	//2.һ���ڵ㼰����
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.һ���ڵ㼰����
	else
	{
		SListNode* tmpNode = (*pphead)->next;
		free(*pphead);
		*pphead = NULL;
		*pphead = tmpNode;
	}
	
}

void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SListNode* SListFind(SListNode* phead, SLTDateType x)
{
	if (phead == NULL)
	{
		return;
	}
	SListNode* cur = phead;
	/*while (cur->data != x)
	{
		cur = cur->next;
	}*/
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	if (pos == NULL)
	{
		exit(-1);
	}
	SListNode* newNode = BuySList(x);
	newNode->next = pos->next;
	pos->next = newNode;
}

void SListEraseAfter(SListNode* pos)
{
	if (pos == NULL)
	{
		exit(-1);
	}
	if (pos->next)
	{
		SListNode* Next = pos->next;
		SListNode* nextnext = Next->next;
		free(Next);
		Next = NULL;
		pos->next = nextnext;
	}
	
}

