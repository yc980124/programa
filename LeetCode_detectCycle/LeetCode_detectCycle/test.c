

//����һ��������������ʼ�뻷�ĵ�һ���ڵ㡣 ��������޻����򷵻� null��


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
	//�����ѭ�����������������1.ѭ�����������㡣2.break
	//����ǵڶ����������������������ҵ��뻷�ĵ�һ���ڵ�
	//����ǵ�һ���������Ҫ�����жϣ����з���NULL�������������������������Ĳ�����
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