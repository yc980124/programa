
//  给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//  如果有两个中间结点，则返回第二个中间结点。

struct ListNode* middleNode(struct ListNode* head)
{
	//找中点
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	// 返回
	return slow;
}