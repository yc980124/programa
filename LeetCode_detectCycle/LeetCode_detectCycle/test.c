

//给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。


struct ListNode *detectCycle(struct ListNode *head) {
	struct ListNode *slow, *fast;
	slow = fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			break;
		}
	}
	//上面的循环出来有两种情况：1.循环条件不满足。2.break
	//如果是第二种情况运行下面的语句就能找到入环的第一个节点
	//如果是第一种情况，需要进行判断，进行返回NULL操作，否则他会继续运行下面的操作。
	if (fast == NULL || (fast->next) == NULL)
	{
		return NULL;
	}


	struct ListNode *meet = fast;
	while (head != meet)
	{
		head = head->next;
		meet = meet->next;
	}
	return head;
}