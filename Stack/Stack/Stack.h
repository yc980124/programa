#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int STDateType;

typedef struct Stack
{
	STDateType* _a;
	int _top;
	int _capacity;
}Stack;

void StackInit(Stack* pst);
void StackDestroy(Stack* pst);

void StackPush(Stack* pst, STDateType x);
void StackPop(Stack* pst);
//����1�ǿգ�0�Ƿǿ�
int StackEmpty(Stack* pst);
STDateType Stacktop(Stack* pst);
int StackSize(Stack* pst);


