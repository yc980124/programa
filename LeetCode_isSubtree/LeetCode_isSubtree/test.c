
//  ���������ǿն����� s �� t������ s ���Ƿ������ t ������ͬ�ṹ�ͽڵ�ֵ��������


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	if (p == NULL && q == NULL)
		return true;

	//�жϽṹ�Ƿ���ͬ
	if (p == NULL && q != NULL)
		return false;

	if (q == NULL && p != NULL)
		return false;

	//�ж�ֵ�Ƿ���ͬ   �ߵ�����˵���ṹ��һ���ģ�û��NULL
	if (p->val != q->val)
		return false;

	// �ߵ�����˵���Ѷ��ṹ��ֵ����ͬ��������õݹ�����������ж�
	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

bool isSubtree(struct TreeNode* s, struct TreeNode* t){
	// ��Ȼ��Ŀ˵���Ƿǿ���������Ҷ�ӽڵ�������ǿ�������Ҫȥ�ж�
	if (s == NULL)
		return false;

	if (isSameTree(s, t) == true)
		return true;

	return isSubtree(s->left, t) || isSubtree(s->right, t);
}