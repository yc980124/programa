
//  ����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
//  ����������м��㣬�򷵻صڶ����м��㡣

struct ListNode* middleNode(struct ListNode* head)
{
	//���е�
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	// ����
	return slow;
}