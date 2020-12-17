

// 输入一个链表，输出该链表中倒数第k个结点。

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
{
	// 可以把倒数第k个，想象成正数第n-k个，n是结点的个数
	if (pListHead == NULL || k <= 0)
	{
		return NULL;
	}
	// 计算n
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