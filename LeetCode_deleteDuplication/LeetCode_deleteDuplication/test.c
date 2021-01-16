

//  在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。


class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		// 当链表为空 及只有一个节点时，直接返回
		if (pHead == NULL || pHead->next == NULL)
		{
			return pHead;
		}

		ListNode *prev = NULL;
		ListNode *cur = pHead;
		ListNode *next = pHead->next;
		while (next)
		{
			if (cur->val != next->val)
			{
				prev = cur;
				cur = next;
				next = next->next;
			}
			else
			{
				while (cur->val == next->val && next != NULL)
				{
					next = next->next;
				}
				if (prev == NULL)   // 如果运行到这里prev=NULL，说明链表前几个数字是相同的
				{
					pHead = next;   // 令链表的头为next
				}
				else
				{
					prev->next = next;   // 可能越界，如果链表全为3，则运行到这里prev=NULL，没有next,故要做判断
				}

				cur = next;
				if (next)
					next = next->next;
			}
		}
		return pHead;
	}
};