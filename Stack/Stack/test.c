#include "Stack.h"

void TestStack()
{
	Stack st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	StackPush(&st, 6);
	StackPush(&st, 7);
	while (!StackEmpty(&st))  // StackEmpty函数返回值为1时，表示栈空了，再取个逻辑非（！），就退出while循环
	{
		printf("%d ", StackTop(&st));
		
	}
	printf("\n");
	StackDestroy(&st);

}

int main()
{
	TestStack();
	return 0;
}