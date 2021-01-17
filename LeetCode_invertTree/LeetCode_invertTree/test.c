
// 翻转一棵二叉树。


struct TreeNode* invertTree(struct TreeNode* root){
	if (root == NULL)
		return NULL;

	// 翻转每个节点的左右子树
	struct TreeNode* leftTree = root->left;
	root->left = root->right;
	root->right = leftTree;

	invertTree(root->left);
	invertTree(root->right);

	return root;
}