
//����һ�����ͷָ�� ListNode* pHead����һ��ֵx����дһ�δ��뽫����С��x�Ľ������������֮ǰ��
//�Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣

ListNode* partition(ListNode* pHead, int x) {
	// write code here
	// �жϺϷ���
	if (pHead == NULL)
	{
		return pHead;
	}
	//������������ֱ���Сֵ�ʹ�ֵ
	ListNode* smallList = (ListNode*)malloc(sizeof(ListNode));
	ListNode* bigList = (ListNode*)malloc(sizeof(ListNode));
	ListNode* smallCur = smallList;
	ListNode* bigCur = bigList;
	smallCur->next = NULL;
	bigCur->next = NULL;
	ListNode* cur = pHead;
	// ����ֵ��Сֵ�ֱ������������
	while (cur)
	{
		if ((cur->val) >= x)
		{
			bigCur->next = cur;
			cur = cur->next;
			bigCur = bigCur->next;
		}
		else
		{
			smallCur->next = cur;
			cur = cur->next;
			smallCur = smallCur->next;
		}
	}
	//��Сֵ�������ӵ���ֵ�����ǰ��
	bigCur->next = NULL;
	smallCur->next = bigList->next;
	return smallList->next;
}