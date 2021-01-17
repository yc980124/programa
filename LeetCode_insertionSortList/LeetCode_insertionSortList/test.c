


//��������в�������



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
		sortHead->next = NULL;  //��仰����������
		while (cur)
		{
			ListNode* next = cur->next;
			// ���ж��Ƿ���� ͷ��
			if (cur->val <= sortHead->val)
			{
				cur->next = sortHead;
				sortHead = cur;
				//cur = next;
			}
			else
			{
				// �ж��Ƿ�����м��
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
				//  �����ߵ�����ض��� β��
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