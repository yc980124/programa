
//����һ�������ж��������Ƿ��л���

bool hasCycle(struct ListNode *head) {
	struct ListNode *slow, *fast;
	slow = fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)  //����������������Ϊ����������Ļ����տ�ʼslow��fast������head����������
		{
			return true;
		}
	}
	return false;
}