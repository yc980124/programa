
//  给定两个非空二叉树 s 和 t，检验 s 中是否包含和 t 具有相同结构和节点值的子树。


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

bool isSubtree(struct TreeNode* s, struct TreeNode* t){
	// 虽然题目说了是非空树，但是叶子节点的子树是空树，需要去判断
	if (s == NULL)
		return false;

	if (isSameTree(s, t) == true)
		return true;

	return isSubtree(s->left, t) || isSubtree(s->right, t);
}