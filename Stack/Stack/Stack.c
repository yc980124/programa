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

	if ((pst->_top) == (pst->_capacity))  //top��0��ʼ��λ����ջ����ֵ����һλ��
	{
		pst->_capacity *= 2;
		STDateType* tmp = (STDateType*)realloc(pst->_a, sizeof(STDateType)*pst->_capacity);
		if (tmp == NULL)
		{
			printf("�ڴ治��\n");
			exit(-1);
		}
	}
	pst->_a[pst->_top] = x;
	pst->_top++;
}
// ��ջ
void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);//top <= 0ʱ�����ٳ�ջ����Ϊtop=0ʱ����Ӧ0�±�������û���ݡ�
	                      //��Ϊtop���趨��ÿ��ջһ�����ݣ�top��+1.Ҳ����˵��top����ջ�����ݵ���һ��

	pst->_top--;
}
//����1�ǿգ�0�Ƿǿ�
int StackEmpty(Stack* pst)
{
	assert(pst);

	/*if (pst->_top == 0)
		return 1;
	else
		return 0;*/
	return pst->_top == 0 ? 1 : 0;
}
// ��ȡջ������
STDateType StackTop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);    //top <= 0ʱ�����ٳ�ջ����Ϊtop=0ʱ����Ӧ0�±�������û���ݡ�
	                      //��Ϊtop���趨��ÿ��ջһ�����ݣ�top��+1.Ҳ����˵��top����ջ�����ݵ���һ��

	pst->_top--;
	return pst->_a[pst->_top];
}
int StackSize(Stack* pst)
{
	assert(pst);

	return pst->_top;   // top���±�
}
