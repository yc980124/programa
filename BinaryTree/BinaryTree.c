#include<stdio.h>
#include<stdlib.h>

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{printf("NULL ");return;}

	printf("%c ", root->_data);
	PrevOrder(root->_left);
	PrevOrder(root->_right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL "); return;
	}

	InOrder(root->_left);
	printf("%c ", root->_data);
	InOrder(root->_right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL "); return;
	}

	PostOrder(root->_left);
	PostOrder(root->_right);

	printf("%c ", root->_data);
}

//int TreeSize(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//
//	static int size = 0;
//	++size;
//	TreeSize(root->_left);
//	TreeSize(root->_right);
//
//	return size;
//}

//void TreeSize(BTNode* root, int* psize)
//{
//	if (root == NULL)
//		return;
//	else
//		(*psize)++;
//
//	TreeSize(root->_left, psize);
//	TreeSize(root->_right, psize);
//}

int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + TreeSize(root->_left) + TreeSize(root->_right);
}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;

	if (root->_left == NULL && root->_left == NULL)
		return 1;

	return TreeLeafSize(root->_left) + TreeLeafSize(root->_right);
}

BTNode* CreateNode(int x)
{
	BTNode* node =(BTNode*)malloc(sizeof(BTNode));
	node->_data = x;
	node->_left = NULL;
	node->_right = NULL;

	return node;
}

int main()
{
	BTNode* A = CreateNode('A');
	BTNode* B = CreateNode('B');
	BTNode* C = CreateNode('C');
	BTNode* D = CreateNode('D');
	BTNode* E = CreateNode('E');
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;

	PrevOrder(A);
	printf("\n");

	InOrder(A);
	printf("\n");

	PostOrder(A);
	printf("\n");

	printf("TreeSize:%d\n", TreeSize(A));
	printf("TreeSize:%d\n", TreeSize(A));

	printf("TreeLeafSize:%d\n", TreeLeafSize(A));


	/*int sizea = 0;
	TreeSize(A, &sizea);
	printf("TreeSize:%d\n", sizea);

	int sizeb = 0;
	TreeSize(B, &sizeb);
	printf("TreeSize:%d\n", sizeb);*/



	getchar();

	return 0;
}