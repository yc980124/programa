struct ListNode* removeElements(struct ListNode* head, int val){
	while ((head != NULL) && (head->val == val))
	{
		head = head->next;
	}
	if (head == NULL)
	{
		return NULL;
	}
	struct ListNode* prev = NULL;
	struct ListNode* cur = head;
	while (cur)
	{
		if ((cur->val) == val)
		{
			prev->next = cur->next;
			cur = cur->next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}