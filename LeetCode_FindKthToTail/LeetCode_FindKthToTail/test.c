

// ����һ����������������е�����k����㡣

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
{
	// ���԰ѵ�����k���������������n-k����n�ǽ��ĸ���
	if (pListHead == NULL || k <= 0)
	{
		return NULL;
	}
	// ����n
	int n = 0;
	ListNode* cur = pListHead;
	while (cur)
	{
		cur = cur->next;
		n++;
	}
	if (n < k)
	{
		return NULL;
	}
	n = n - k;
	while (n--)
	{
		pListHead = pListHead->next;
	}
	return pListHead;
}