

//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{

	//判断合法性
	if (l1 == NULL && l2 == NULL)
	{
		return l1;
	}
	else if (l1 != NULL && l2 == NULL)
	{
		return l1;
	}
	else if (l1 == NULL && l2 != NULL)
	{
		return l2;
	}

	//分别给l1和l2设立头指针
	struct ListNode* cur1 = l1;
	struct ListNode* cur2 = l2;
	//创建一个新链表，用于存放结果
	struct ListNode* newnode = NULL;

	//比较两链表首结点的值，较小值作为新链表的头结点
	if ((cur1->val) <= (cur2->val))
	{
		newnode = cur1;
		cur1 = cur1->next;
	}
	else
	{
		newnode = cur2;
		cur2 = cur2->next;
	}
	struct ListNode* cur = newnode;
	while (cur1 && cur2)
	{
		if ((cur1->val) <= (cur2->val))
		{
			cur->next = cur1;
			cur = cur->next;
			cur1 = cur1->next;
		}
		else
		{
			cur->next = cur2;
			cur = cur->next;
			cur2 = cur2->next;
		}
	}
	while (cur1)
	{
		cur->next = cur1;
		cur = cur->next;
		cur1 = cur1->next;
	}
	while (cur2)
	{
		cur->next = cur2;
		cur = cur->next;
		cur2 = cur2->next;
	}
	cur->next = NULL;
	return newnode;
}