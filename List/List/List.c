#include "List.h"


//  ��ʼ��������һ��ͷ�ڵ�
ListNode* ListInit()
{
	ListNode* pHead = BuyListNode(0);
	//pHead->_data = 0;     ���踳ֵ��ֻ��ͷָ��
	pHead->_next = pHead;
	pHead->_prev = pHead;

	return pHead;
}
ListNode* BuyListNode(LTDataType x)
{
	ListNode *node = (LTDataType*)malloc(sizeof(LTDataType));
	node->_data = x;
	node->_next = NULL;
	node->_prev = NULL;

	return node;;
}

// �������е����ݽڵ㣬����ͷ�ڵ����ʹ��
void ListClear(ListNode* pHead)
{
	assert(pHead);

	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		ListNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	pHead->_next = pHead;
	pHead->_prev = pHead;
}
// ˫����������
void ListDestory(ListNode** ppHead)
{
	/*assert(pHead);

	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
	ListNode* next = cur->_next;
	free(cur);
	cur = next;
	}*/
	ListClear(*ppHead);
	free(*ppHead);
	*ppHead = NULL;   // �����ÿ�û�ã���Ϊ���Ǵ�ֵ���ã�����ĸı䣬���治���,���Ը�Ϊ����ָ��
}
// ˫�������ӡ
ListNode* ListPrint(ListNode* pHead)
{
	assert(pHead);

	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		printf("%d ", cur->_data);
		cur = cur->_next;
	}
	printf("\n");
}
// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x)
{
	/*assert(pHead);

	ListNode *tail = pHead->_prev;
	ListNode *newnode = BuyListNode(x);
	tail->_next = newnode;
	newnode->_prev = tail;

	pHead->_prev = newnode;
	newnode->_next = pHead;*/

	ListInsert(pHead->_prev, x);
}
// ˫������βɾ
void ListPopBack(ListNode* pHead)
{
	/*assert(pHead);
	assert(pHead->_next != NULL);

	ListNode* tail = pHead->_prev;
	ListNode* tailPrev = tail->_prev;

	pHead->_prev = tailPrev;
	tailPrev->_next = pHead;
	free(tail);
	tail = NULL;*/
	ListErase(pHead->_prev);

}
// ˫������ͷ��
// ͷ�岢������pHead֮ǰ���룬������pHead֮��
// ����ֻ��һ��phead���������Ҳ�������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x)
{
	/*assert(pHead);

	ListNode* node = BuyListNode(x);
	ListNode* first = pHead->_next;

	pHead->_next = node;
	node->_prev = pHead;

	node->_next = first;
	first->_prev = node;*/

	ListInsert(pHead->_next,x);
}
// ˫������ͷɾ
// ͷɾ������ɾ��pHead������ɾ��pHead֮��ĵ�һ��
void ListPopFront(ListNode* pHead)
{
	//assert(pHead);
	//assert(pHead->_next != pHead);  // ��ֹɾ��ͷ�ڵ�

	//ListNode* first = pHead->_next;
	//ListNode* second = first->_next;

	//pHead->_next = second;
	//second->_prev = pHead;

	//pHead->_prev = second;
	//second->_next = pHead;

	//free(first);
	//first = NULL;
	ListErase(pHead->_next);
}
// ˫���������
// Ҳ�����޸�ֵ����Ϊ�ҵ��˽ڵ��ַ
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		if (cur->_data == x)
			return cur;
		else
			cur = cur->_next;
	}
	return NULL;
}
// ˫��������pos��ǰ����в���
// ���������ں������
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);

	ListNode* newnode = BuyListNode(x);
	ListNode* posPrev = pos->_prev;

	posPrev->_next = newnode;
	newnode->_prev = posPrev;

	newnode->_next = pos;
	pos->_prev = newnode;
}
// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos)
{
	assert(pos);

	ListNode* posPrev = pos->_prev;
	ListNode* posNext = pos->_next;

	free(pos);
	posPrev->_next = posNext;
	posNext->_prev = posPrev;
}