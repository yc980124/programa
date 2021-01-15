


//  ����һ������ÿ���ڵ����һ���������ӵ����ָ�룬��ָ�����ָ�������е��κνڵ��սڵ㡣
//  Ҫ�󷵻��������� �����


class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == NULL)
		{
			return NULL;
		}
		// 1.�����ڵ㣬���ӵ�ԭ�ڵ�ĺ���
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

		// 2.�������ڵ��random
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

		// 3.������������
		cur = head;
		Node* copyHead = head->next;
		while (cur != NULL)
		{
			Node* copyCur = cur->next;  //���ܵ���copyHead,��Ϊÿ��ѭ������ִ��
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
			//copyCur = copyCur->next;  //���޲���Ӱ��������Node* copyCur = cur->next; �غ�
		}
		return copyHead;
	}
};