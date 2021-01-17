#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;   //用数组建堆，堆是完全二叉树顺序结构
	int _size;
	int _capacity;
}Heap;

// 堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n);
// 堆的销毁
void HeapDestory(Heap* hp);
// 堆的插入
void HeapPush(Heap* hp, HPDataType x);
// 堆的删除
void HeapPop(Heap* hp);
// 获取堆顶数据
HPDataType HeapTop(Heap* hp);

void Swap(HPDataType* a, HPDataType* b);

void AdjustDown(HPDataType* a, int n, int root);
void AdjustUp(HPDataType* a, int n, int root);