
// ������������������дһ�����������������Ƿ���ͬ��

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