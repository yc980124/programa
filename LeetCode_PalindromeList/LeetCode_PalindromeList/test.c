

//  ����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ��


bool chkPalindrome(ListNode* A) {
	// write code here
	if (A == NULL)
	{
		return false;
	}
	//�ҵ��е�
	ListNode* slow = A;
	ListNode* fast = A;
	ListNode* prev = NULL;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		prev = slow;
		slow = slow->next;
	}

	//����
	ListNode* cur = slow;
	ListNode* newnode = NULL;
	while (cur)
	{
		ListNode* next = cur->next;
		cur->next = newnode;
		newnode = cur;
		cur = next;
	}
	//�Ƚ�
	while (newnode && A) //�������Ϊ����ʱ��ֻ�Ƚ�A��ǰ�����Ϳ���
		//��12321���������ú��Ϊ123,�����Ƚ�A���12,
		//�����ú������12���Ϳ����жϳ��ǻ��������Ͳ������ж���������������ż��
	{
		if ((newnode->val) != (A->val))
		{
			return false;
		}
		else
		{
			newnode = newnode->next;
			A = A->next;
		}
	}
	return true;
}