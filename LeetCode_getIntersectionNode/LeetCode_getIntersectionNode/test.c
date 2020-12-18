

//��дһ�������ҵ������������ཻ����ʼ�ڵ㡣

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