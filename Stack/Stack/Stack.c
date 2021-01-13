#include "Stack.h"

void StackInit(Stack* pst)
{
	assert(pst);

	/*pst->_a = NULL;
	pst->_top = 0;
	pst->_capacity = 0;*/

	pst->_a = (STDateType*)malloc(sizeof(STDateType)*4);
	pst->_top = 0;
	pst->_capacity = 4;
}
void StackDestroy(Stack* pst)
{
	assert(pst);

	free(pst->_a);
	pst->_a = NULL;
	pst->_top = pst->_capacity = 0;
}

void StackPush(Stack* pst, STDateType x)
{
	assert(pst);

	if ((pst->_top) == (pst->_capacity))  //top从0开始，位置是栈顶数值的下一位。
	{
		pst->_capacity *= 2;
		STDateType* tmp = (STDateType*)realloc(pst->_a, sizeof(STDateType)*pst->_capacity);
		if (tmp == NULL)
		{
			printf("内存不足\n");
			exit(-1);
		}
	}
	pst->_a[pst->_top] = x;
	pst->_top++;
}
// 出栈
void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);//top <= 0时，不再出栈。因为top=0时，对应0下标数组内没数据。
	                      //因为top的设定是每入栈一个数据，top会+1.也就是说，top总是栈顶数据的上一个

	pst->_top--;
}
//返回1是空，0是非空
int StackEmpty(Stack* pst)
{
	assert(pst);

	/*if (pst->_top == 0)
		return 1;
	else
		return 0;*/
	return pst->_top == 0 ? 1 : 0;
}
// 获取栈顶数据
STDateType StackTop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);    //top <= 0时，不再出栈。因为top=0时，对应0下标数组内没数据。
	                      //因为top的设定是每入栈一个数据，top会+1.也就是说，top总是栈顶数据的上一个

	pst->_top--;
	return pst->_a[pst->_top];
}
int StackSize(Stack* pst)
{
	assert(pst);

	return pst->_top;   // top是下标
}
