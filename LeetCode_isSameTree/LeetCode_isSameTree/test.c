
// 给定两个二叉树，编写一个函数来检验它们是否相同。

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	if (p == NULL && q == NULL)
		return true;

	//判断结构是否相同
	if (p == NULL && q != NULL)
		return false;

	if (q == NULL && p != NULL)
		return false;

	//判断值是否相同   走到这里说明结构是一样的，没有NULL
	if (p->val != q->val)
		return false;

	// 走到这里说明堆顶结构和值都相同，下面采用递归进行子树的判断
	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}