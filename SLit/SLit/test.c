#include "SList.h"

int main()
{
	SListNode* head = NULL;
	SListPushBack(&head,1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushBack(&head, 4);

	SListPopBack(&head);
	SListPopBack(&head);

	SListPrint(head);
	return 0;
}