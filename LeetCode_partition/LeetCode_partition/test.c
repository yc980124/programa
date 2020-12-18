
//现有一链表的头指针 ListNode* pHead，给一定值x，编写一段代码将所有小于x的结点排在其余结点之前，
//且不能改变原来的数据顺序，返回重新排列后的链表的头指针。

ListNode* partition(ListNode* pHead, int x) {
	// write code here
	// 判断合法性
	if (pHead == NULL)
	{
		return pHead;
	}
	//创建两个链表分别存放小值和大值
	ListNode* smallList = (ListNode*)malloc(sizeof(ListNode));
	ListNode* bigList = (ListNode*)malloc(sizeof(ListNode));
	ListNode* smallCur = smallList;
	ListNode* bigCur = bigList;
	smallCur->next = NULL;
	bigCur->next = NULL;
	ListNode* cur = pHead;
	// 将大值和小值分别放入两个链表
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
	//将小值链表链接到大值链表的前面
	bigCur->next = NULL;
	smallCur->next = bigList->next;
	return smallList->next;
}