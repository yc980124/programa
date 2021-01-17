


//对链表进行插入排序。



class Solution
{
public:
	ListNode* insertionSortList(ListNode* head)
	{
		if (head == NULL || head->next == NULL)
		{
			return head;
		}

		ListNode *sortHead = head;
		ListNode *cur = head->next;
		sortHead->next = NULL;  //这句话必须放在最后
		while (cur)
		{
			ListNode* next = cur->next;
			// 先判断是否可以 头插
			if (cur->val <= sortHead->val)
			{
				cur->next = sortHead;
				sortHead = cur;
				//cur = next;
			}
			else
			{
				// 判断是否可以中间插
				ListNode* sortPrev = sortHead;
				ListNode* sortCur = sortPrev->next;
				while (sortCur)
				{
					if (cur->val <= sortCur->val)
					{
						sortPrev->next = cur;
						cur->next = sortCur;
						//cur = next;
						break;
					}
					else
					{
						sortPrev = sortCur;
						sortCur = sortCur->next;
					}
				}
				//  程序走到这里必定是 尾插
				if (sortCur == NULL)
				{
					sortPrev->next = cur;
					cur->next = NULL;
					//cur = next;
				}
			}
			cur = next;
		}
		return sortHead;
	}
};