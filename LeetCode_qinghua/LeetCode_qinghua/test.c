
//  编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）。
//例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树。建立起此二叉树以后，
//再对二叉树进行中序遍历，输出遍历结果。


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