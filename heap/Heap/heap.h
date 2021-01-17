#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;   //�����齨�ѣ�������ȫ������˳��ṹ
	int _size;
	int _capacity;
}Heap;

// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n);
// �ѵ�����
void HeapDestory(Heap* hp);
// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* hp);
// ��ȡ�Ѷ�����
HPDataType HeapTop(Heap* hp);

void Swap(HPDataType* a, HPDataType* b);

void AdjustDown(HPDataType* a, int n, int root);
void AdjustUp(HPDataType* a, int n, int root);