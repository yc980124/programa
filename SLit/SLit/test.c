#include "SList.h"

void test1()
{
	SListNode* head = NULL;
	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushBack(&head, 4);
	SListPrint(head);

	SListPopBack(&head);
	SListPopBack(&head);
	SListPrint(head);

	SListPushFront(&head, 5);
	SListPushFront(&head, 6);
	SListPrint(head);

	SListPopFront(&head);
	SListPopFront(&head);
	SListPrint(head);
}

void test2()
{
	SListNode* head = NULL;
	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushBack(&head, 4);
	SListPrint(head);

	SListNode* pos = SListFind(head, 2);
	SListInsertAfter(pos, 99);
	SListInsertAfter(pos, 88);
	SListPrint(head);

	SListEraseAfter(pos);

	/*if (pos != NULL)
	{
		pos->data = 88;
	}*/
	SListPrint(head);
}

int main()
{
	//test1();
	test2();

	return 0;
}