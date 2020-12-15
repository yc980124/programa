

//  给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。


bool chkPalindrome(ListNode* A) {
	// write code here
	if (A == NULL)
	{
		return false;
	}
	//找到中点
	ListNode* slow = A;
	ListNode* fast = A;
	ListNode* prev = NULL;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		prev = slow;
		slow = slow->next;
	}

	//逆置
	ListNode* cur = slow;
	ListNode* newnode = NULL;
	while (cur)
	{
		ListNode* next = cur->next;
		cur->next = newnode;
		newnode = cur;
		cur = next;
	}
	//比较
	while (newnode && A) //如果链表为奇数时，只比较A的前几个就可以
		//如12321，后面逆置后的为123,这样比较A里的12,
		//和逆置后里面的12，就可以判断出是回文数，就不用了判断链表是奇数还是偶数
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