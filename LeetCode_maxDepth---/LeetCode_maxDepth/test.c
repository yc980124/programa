

// 给定一个二叉树，找出其最大深度。

int maxDepth(struct TreeNode* root){
	if (root == NULL)
		return 0;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);

	return leftDepth >= rightDepth ? 1 + leftDepth : 1 + rightDepth;
}