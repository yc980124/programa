#include<stdio.h>
#include<string.h>
#include<assert.h>

void main()
{
	union
	{
		short k;
		char i[2];
	}*s,a;

	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;

	printf("%x\n", a.k);

}


//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char **pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	printf("%s\n", *pa);
//
//	return 0;
//}

/*
char* my_strcpy(char *p1, char *p2)
{
	assert(p1 != NULL && p2 != NULL);    //���Ϸ���
	char *p3 = p1;              //��������
	char *p4 = p2;
	while (*p4 != 0)
	{
		*p3++ = *p4++;
	}
	*p3 = '\0';
	return p1;             //p3�ĵ�ַ��p1����ͬ���ı�p3��ֵͬ����ı�p1
	                        //������Ϊp1һֱ����ָ��str1���׵�ַ����p3����ָ���׵�ַ�ˣ����Է���p1
}

int main()
{
	char str1[] = "Hello";
	char *str2 = "Bit.";

	char *ret=my_strcpy(str1, str2);
	printf("%s\n", str1);    //���ִ�ӡ��ʽ�Կ�
	printf("%s\n", ret);

	return 0;
}
*/