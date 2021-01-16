

//  ��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣


class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		// ������Ϊ�� ��ֻ��һ���ڵ�ʱ��ֱ�ӷ���
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
				if (prev == NULL)   // ������е�����prev=NULL��˵������ǰ������������ͬ��
				{
					pHead = next;   // �������ͷΪnext
				}
				else
				{
					prev->next = next;   // ����Խ�磬�������ȫΪ3�������е�����prev=NULL��û��next,��Ҫ���ж�
				}

				cur = next;
				if (next)
					next = next->next;
			}
		}
		return pHead;
	}
};