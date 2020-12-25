
//给定一个链表，判断链表中是否有环。

bool hasCycle(struct ListNode *head) {
	struct ListNode *slow, *fast;
	slow = fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)  //此语句放在下面是因为，放在上面的话，刚开始slow和fast都等于head，条件成立
		{
			return true;
		}
	}
	return false;
}