


//  给定一个链表，每个节点包含一个额外增加的随机指针，该指针可以指向链表中的任何节点或空节点。
//  要求返回这个链表的 深拷贝。


class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == NULL)
		{
			return NULL;
		}
		// 1.拷贝节点，链接到原节点的后面
		Node* cur = head;
		while (cur)
		{
			Node* copyNode = (Node*)malloc(sizeof(Node));
			copyNode->random = NULL;
			copyNode->next = NULL;
			copyNode->val = cur->val;

			Node* next = cur->next;
			cur->next = copyNode;
			cur = next;
			copyNode->next = cur;
		}

		// 2.处理拷贝节点的random
		Node* current = head;
		while (current)
		{
			Node* prev = current;
			current = current->next;
			if (prev->random)
				current->random = prev->random->next;
			else
				current->random = NULL;
			current = current->next;
		}

		// 3.拆解出复制链表
		cur = head;
		Node* copyHead = head->next;
		while (cur != NULL)
		{
			Node* copyCur = cur->next;  //不能等于copyHead,因为每次循环都会执行
			Node* next = copyCur->next;
			cur->next = next;
			if (next)
			{
				copyCur->next = next->next;
			}
			else
			{
				copyCur->next = next;
			}
			cur = next;
			//copyCur = copyCur->next;  //有无并不影响结果，和Node* copyCur = cur->next; 重合
		}
		return copyHead;
	}
};