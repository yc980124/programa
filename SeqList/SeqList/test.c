#include "SeqList.h"

// 测试 头尾插入，删除
void TestSeqList1()
{
	SL s;
	SeqListInit(&s);           //传地址才能初始化
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

	SeqListInsert(&s, 0, 9);    //这里的3是数组的下标，也就是数组中第四个位置的值
	SeqListPrint(&s);

	SeqListErase(&s, 1);

}

int main()
{
	TestSeqList1();
	return 0;
}