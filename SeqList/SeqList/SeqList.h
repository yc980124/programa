#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;   //ָ��̬���ٵ�����
	size_t  size;      //��Ч���ݵĸ���
	size_t  capacity;  // �����ռ�Ĵ�С
}SL;
 //  β��βɾ   ͷ��ͷɾ
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListExpand(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

void SeqListInsert(SL* ps,size_t pos ,SLDataType x);
void SeqListErase(SL* ps, size_t pos);




