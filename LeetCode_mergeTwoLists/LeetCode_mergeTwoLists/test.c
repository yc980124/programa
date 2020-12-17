

//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{

	//�жϺϷ���
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

	//�ֱ��l1��l2����ͷָ��
	struct ListNode* cur1 = l1;
	struct ListNode* cur2 = l2;
	//����һ�����������ڴ�Ž��
	struct ListNode* newnode = NULL;

	//�Ƚ��������׽���ֵ����Сֵ��Ϊ�������ͷ���
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