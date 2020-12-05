#include "SeqList.h"

// ���� ͷβ���룬ɾ��
void TestSeqList1()
{
	SL s;
	SeqListInit(&s);           //����ַ���ܳ�ʼ��
	SeqListPushBack(&s,1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	SeqListPushFront(&s, -3);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListInsert(&s, 0, 9);    //�����3��������±꣬Ҳ���������е��ĸ�λ�õ�ֵ
	SeqListPrint(&s);

	SeqListErase(&s, 1);

}

int main()
{
	TestSeqList1();
	return 0;
}