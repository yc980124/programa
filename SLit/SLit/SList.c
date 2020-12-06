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
	{
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

void SListPushFront();
void SListPopFront();

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