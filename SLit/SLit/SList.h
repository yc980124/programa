#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
} SListNode;


void SListPushBack(SListNode** pphead, SLTDateType x);
void SListPopBack(SListNode** pphead);
void SListPushFront(SListNode** pphead, SLTDateType x);
void SListPopFront(SListNode** pphead);
SListNode* SListFind(SListNode* phead, SLTDateType x);
void SListInsertAfter(SListNode* pos, SLTDateType x);
void SListEraseAfter(SListNode* pos);
SListNode* BuySList(SLTDateType x);
void SListPrint(SListNode* phead);