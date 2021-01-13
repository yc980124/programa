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
	while (!StackEmpty(&st))  // StackEmpty��������ֵΪ1ʱ����ʾջ���ˣ���ȡ���߼��ǣ����������˳�whileѭ��
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