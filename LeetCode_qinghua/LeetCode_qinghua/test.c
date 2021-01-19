
//  ��һ�����򣬶����û������һ����������ַ��������ݴ��ַ�������һ������������ָ�뷽ʽ�洢����
//�������µ���������ַ����� ABC##DE#G##F### ���С�#����ʾ���ǿո񣬿ո��ַ����������������˶������Ժ�
//�ٶԶ������������������������������


#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
	char val;
	struct TreeNode* _left;
	struct TreeNode* _right;
}TreeNode;

void InOrder(TreeNode* root)
{
	if (root == NULL)
		return;

	InOrder(root->_left);
	printf("%c ", root->val);
	InOrder(root->_right);
}

TreeNode* TreeCreate(char* str, int* pi)
{
	if (str[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}
	else
	{
		TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
		root->val = str[*pi];
		(*pi)++;

		root->_left = TreeCreate(str, pi);
		root->_right = TreeCreate(str, pi);

		return root;
	}

}

int main()
{
	char str[100];
	scanf("%s", str);

	int i = 0;
	TreeNode* root = TreeCreate(str, &i);

	InOrder(root);

	return 0;
}