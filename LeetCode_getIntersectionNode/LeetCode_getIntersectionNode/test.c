

//编写一个程序，找到两个单链表相交的起始节点。

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB){
	if (headA == NULL || headB == NULL)
	{
		return NULL;
	}
	struct ListNode *curA = headA;
	struct ListNode *curB = headB;
	while (curA != curB)
	{
		curA = curA == NULL ? headB : curA->next;
		curB = curB == NULL ? headA : curB->next;
	}
	return curA;
}