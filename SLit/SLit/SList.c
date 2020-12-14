#include "SList.h"

SListNode* BuySList(SLTDateType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("申请节点失败！");
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
		//找尾
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
	//1.空
	if (*pphead == NULL)
	{
		return;
	}
	//2.一个节点
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.一个节点以上
	else
	{   //设置双指针的目的是：释放最后一个节点之后，可以使得前一个节点的next指向NULL
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
	//1.空
	if (*pphead == NULL)
	{
		return;
	}
	//2.一个节点及以上
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.一个节点及以上
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

