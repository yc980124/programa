
// ��תһ�ö�������


struct TreeNode* invertTree(struct TreeNode* root){
	if (root == NULL)
		return NULL;

	// ��תÿ���ڵ����������
	struct TreeNode* leftTree = root->left;
	root->left = root->right;
	root->right = leftTree;

	invertTree(root->left);
	invertTree(root->right);

	return root;
}