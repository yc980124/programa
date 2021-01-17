#include "List.h"


//  初始化：建立一个头节点
ListNode* ListInit()
{
	ListNode* pHead = BuyListNode(0);
	//pHead->_data = 0;     无需赋值，只是头指针
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

// 清理所有的数据节点，保留头节点继续使用
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
// 双向链表销毁
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
	*ppHead = NULL;   // 这里置空没用，因为这是传值调用，这里的改变，外面不会变,所以改为二级指针
}
// 双向链表打印
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
// 双向链表尾插
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
// 双向链表尾删
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
// 双向链表头插
// 头插并不是在pHead之前插入，而是在pHead之后
// 哪怕只有一个phead，下面程序也可以完成头插
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
// 双向链表头删
// 头删并不是删除pHead，而是删除pHead之后的第一个
void ListPopFront(ListNode* pHead)
{
	//assert(pHead);
	//assert(pHead->_next != pHead);  // 防止删除头节点

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
// 双向链表查找
// 也可以修改值，因为找到了节点地址
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
// 双向链表在pos的前面进行插入
// 单链表是在后面插入
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
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos)
{
	assert(pos);

	ListNode* posPrev = pos->_prev;
	ListNode* posNext = pos->_next;

	free(pos);
	posPrev->_next = posNext;
	posNext->_prev = posPrev;
}