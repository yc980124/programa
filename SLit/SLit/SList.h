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
void SListPushFront();
void SListPopFront();

SListNode* BuySList(SLTDateType x);
void SListPrint(SListNode* phead);