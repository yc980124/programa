#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;   //指向动态开辟的数组
	size_t  size;      //有效数据的个数
	size_t  capacity;  // 容量空间的大小
}SL;
 //  尾插尾删   头插头删
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListExpand(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

void SeqListInsert(SL* ps,size_t pos ,SLDataType x);
void SeqListErase(SL* ps, size_t pos);




