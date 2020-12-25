#include <stdio.h>
#include <memory.h>
#include <assert.h>

/*
size_t my_strlen(const char *string)
{
	assert(string);               //���Ϸ���
	char *str = (char*)string;    //��������
	size_t len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

int main()
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	int ret = my_strlen(str);
	printf("str length = %d\n", ret);
	return 0;
}
*/





/*
char *my_strcpy(char *strDestination, const char *strSource)
{
	assert(strDestination && strSource);    //���Ϸ���

	char *dest = (char*)strDestination;     //��������
	char *src = (char*)strSource;

	while (*src)           //�൱��while��*src != '\0'��
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';         //��Ŀ��ռ��β���ַ���������־
	return strDestination;
}

int main()
{
	char str1[80];
	char *str2 = "abcdefghijklmnopqrstuvwxyz";
	my_strcpy(str1, str2);
	printf("%s\n",str1);
	return 0;
}
*/



/*
int my_strcmp(const char *string1, const char *string2)
{
	assert(string1 && string2);          //���Ϸ���

	char *str1 = (char*)string1;         //��������
	char *str2 = (char*)string2;
	
	int size1 = strlen(str1);            //�жϳ���
	int size2 = strlen(str2);
	if (size1 > size2)
		return 1;
	else if (size1 < size2)
		return -1;
	
	while (*str1)                       //����ǰ����жϳ���֮�������е�����϶������ַ���������ȵ����
	{
		int ret = 0;
		ret = *str1 - *str2;
		if (ret > 0)
			return 1;
		else if (ret < 0)
			return -1;
	}
	return 0;
}

int main()
{
	char *str1 = "bbcd";
	char *str2 = "abcd";
	int ret = my_strcmp(str1, str2);
	if (ret == 1)
		printf("str1 > str2\n");
	if (ret == 0)
		printf("str1 = str2\n");
	if (ret == -1)
		printf("str1 < str2\n");

	return 0;
}
*/




/*
char *my_strcat(char *strDestination, const char *strSource)
{
	assert(strDestination && strSource);         //���Ϸ���

	const char *src = (const char*)strSource;    //��������
	char *dest = (const char*)strDestination;
	char *pdest = dest;
	while (*pdest != '\0')       // �ҵ�Ŀ��ռ��β������Ŀ��ռ�'\0'��λ��
	{
		pdest++;
	}
	while (*src != '\0')        //��Ŀ��ռ��'\0'λ������
	{
		*pdest = *src;
		src++;
		pdest++;
	}
	*pdest = '\0';           //��Ŀ��ռ��β���ַ���������־
	return strDestination;
}

int main()
{
	char str1[27] = { "abcdefghijklmnopqrst" };
	char *str2 = "uvwxyz";
	char *pdest = my_strcat(str1, str2);
	printf("%s\n", pdest);
	return 0;
}
*/





/*
char *my_strstr(const char *str1, const char *str2)
{
	assert(str1 && str2);                   //���Ϸ���
	const char *str = (const char*)str1;    //��������
	const char *substr = (const char*)str2;
	char *pstr = NULL;

	if (*substr == '\0')        //��ֹ�Ӵ��ǿմ�
		return str1;            //�Ӵ��ǿմ�ʱ�������ַ���         

	while (*str)         //�൱��while��*src != '\0'��
	{
		pstr = str;
		substr = str2;      //ÿ��ѭ��ʱ������ص��Ӵ����׵�ַ
		while (*pstr && *substr && (*pstr == *substr))   //���Ǽ��Ӵ���������ѭ��ʱ�ͻᱻ��������
		{
			pstr++;
			substr++;
		}
		if (*substr == '\0')
			return str;
		str++;
	}
}

int main()
{
	char str[] = "This is a simple string";
	char *pch;
	pch = my_strstr(str, "simple");
	strncpy(pch, "sample", 6);     //�涨�����ַ��������ַ������ƺ���
	puts(str);
	return 0;
}
*/


 

/*
void *my_memcpy(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *Dest = (char *)dest;
	const char *Src = (const char *)src;
	while (count-- > 0)
	{
		*Dest++ = *Src++;
	}
	//*Dest = '\0';
}

int main()
{
	char str1[] = "hello";
	char *str2 = "bit.aaa";
	memcpy(str1, str2, 5);
	printf("%s\n", str1);  //memcpy��������������Ŀ�Ĵ���\0�������Ƶĳ��ȳ���dest�ĳ��Ȳ���û�а�src�����\0���ƣ�
	                        //�������ֵ����ʱ����\0Ҳ���á�
	return 0;
}
*/





// �ַ��� �ƶ�����
void *my_memmove(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);      //���Ϸ���
	char *str1 = (char *)dest;                //��������
	char *str2 = (const char *)src;

	if (str1 > str2 && str1<str2 + count)    //�����ص�
	{
		str2 = str2 + count - 1;
		str1 = str1 + count - 1;
		while (count-- > 0)
		{
			*str1-- = *str2--;   //����һ����ʼ�㡣��str=abcde����src=str+2����ôsrc = cde...
		}
	}
	else                       //û���ص������
	while (count-- > 0)
	{
		*str1++ = *str2++;
	}
}

int main()
{
	char str1[] = {"abcdefghijk"};
	char *str2 = "oooooo";
	my_memmove(str1 + 5, str1 + 2, 5);   //����һ����ʼ��
	//memmove(str1 + 5, str1 + 2, 5);        //������һ����ĸһ����ĸ���ƣ�����һ��һ���ĸ���
	puts(str1);

	memcpy(str1 + 5, str1 + 2, 5);      //memmove �� memcpy �ıȽ�
	puts(str1);

	return 0;
}

//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}
