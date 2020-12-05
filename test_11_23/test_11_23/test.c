#include <stdio.h>
#include <string.h>
#include <assert.h>

char *my_strncpy(char *strD, const char *strS,size_t count)
{
	assert(strD != NULL  && strS != NULL);
	char* str1 = strD;
	char* str2 = strS;

	while (count-- > 0)
	{
		*str1++ = *str2++;
		//str1++;
		//str2++;
	}
	*str1 = '\0';          //���п��ޣ� �㲻��
	return strD;
}

int main()
{
	char str1[20] = "Hello";     //���������ʵ�ֿ���,��Ϊ��Ҫ��Ŀ��ռ����ɱ䡣
	char *str2 = "Bit.777";
	printf("%s\n", str1);
	char *pret = my_strncpy(str1, str2,6);
	printf("%s\n", str1);
	printf("%s\n", pret);
	return 0;
}




//  strncat  ����ʵ��
/*
char *my_strncat(char *strDest, const char *strSrc,size_t count)
{
	assert(strDest != NULL && strSrc != NULL);
	char *pdest = strDest;
	const char *psrc = strSrc;
	//�Ȳ���Ŀ���ַ�����ĩβ\0
	while (*pdest != '\0')
	{
		pdest++;
	}
	//ʵ�����ӿ���
	while (count-- > 0)
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';
	return strDest;
}

int main()
{
	char str1[20] = "Hello";     //���������ʵ�ֿ���,��Ϊ��Ҫ��Ŀ��ռ��㹻�� ��Ŀ��ռ����ɱ䡣
	char *str2 = "Bit.";
	printf("%s\n", str1);
	char *pret = my_strncat(str1, str2,7);
	printf("%s\n", str1);
	printf("%s\n", pret);
	return 0;
}
*/

//  strncmp  ����ʵ��
/*
int my_strncmp(const char *str1, const char *str2,size_t count)
{
	assert(str1 != NULL  &&  str2 != NULL);
	const char *pstr1 = str1;
	const char *pstr2 = str2;
	int ret = 0;

	while (--count > 0)
	{
		if (*pstr1 - *pstr2 != 0)
			break;
		pstr1++;
		pstr2++;
		//count--;
	}
	ret = *pstr1 - *pstr2;
	return ret;
}

int main()
{
	char* str1 = "Helloa";
	char* str2 = "Hexloaaa";
	int ret = my_strncmp(str1, str2,2);
	if (ret == 0)
		printf("str1 == str2\n");
	else if (ret < 0)
		printf("str1 < str2\n");
	else
		printf("str1 > str2\n");
	return 0;
}
*/

//  strcmp   ����ʵ��
/*
int my_strcmp(const char *str1, const char *str2)
{
	assert(str1 != NULL  &&  str2 != NULL);
	const char *pstr1 = str1;
	const char *pstr2 = str2;
	int ret = 0;

	while (*pstr1 != '\0'  || *pstr2 != '\0')
	{
		if (*pstr1 - *pstr2 != 0)
			break;
		pstr1++;
		pstr2++;
	}
	ret= *pstr1-*pstr2;
	return ret;
}
/*
int my_strcmp(const char *str1, const char *str2)
{
	assert(str1 != NULL  &&  str2 != NULL);
	const char *pstr1 = str1;
	const char *pstr2 = str2;

	while (*pstr1 != '\0'  && *pstr2 != '\0')
	{
		if (*pstr1 > *pstr2)
			return 1;
		else if (*pstr1 < *pstr2)
			return -1;
		else
		{
			pstr1++;
			pstr2++;
		}
	}
	if (*pstr1 != '\0')
		return 1;
	if (*pstr2 != '\0')
		return -1;
	return 0;
}


int main()
{
	char* str1 = "Helloa";
	char* str2 = "Helloaaa";
	int ret = my_strcmp(str1, str2);
	if (ret == 0)
		printf("str1 == str2\n");
	else if (ret < 0 )
		printf("str1 < str2\n");
	else
		printf("str1 > str2\n");
	return 0;
}
*/



//  strcat  ����ʵ��
/*
char *my_strcat(char *strDest, const char *strSrc)
{
	assert(strDest != NULL && strSrc != NULL);
	char *pdest = strDest;
	const char *psrc = strSrc;
	//�Ȳ���Ŀ���ַ�����ĩβ\0
	while (*pdest != '\0')
	{
		pdest++;
	}
	//ʵ�����ӿ���
	while (*psrc != '\0')
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';
	return strDest;
}

int main()
{
	char str1[20] = "Hello";     //���������ʵ�ֿ���,��Ϊ��Ҫ��Ŀ��ռ��㹻�� ��Ŀ��ռ����ɱ䡣
	char *str2 = "Bit.";
	printf("%s\n", str1);
	char *pret = my_strcat(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", pret);
	return 0;
	return 0;
}
*/




//   strcpy  ����ʵ��
/*
char *my_strcpy(char *strD, const char *strS)
{
	assert(strD != NULL  && strS != NULL);
	char* str1 = strD;
	char* str2 = strS;

	while (*str2 != '\0')
	{
		*str1++ = *str2++;
		//str1++;
		//str2++;
	}
	*str1 = '\0';
	return strD;
}

int main()
{
	char str1[20] = "Hello";     //���������ʵ�ֿ���,��Ϊ��Ҫ��Ŀ��ռ����ɱ䡣
	char *str2 = "Bit.";
	printf("%s\n", str1);
	char *pret = my_strcpy(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", pret);
	return 0;
}
*/




//  strlen ����ʵ��
/*
size_t my_strlen(const char *str)
{
	assert(str != NULL);
	char *pstr = str;
	size_t count = 0;

	while (*pstr++ != '\0')
	{
		//pstr++;
		count++;
	}
	return count;
}

size_t my_strlen(const char *str)
{
	if (*str == '\0')
		return 0;
	else
		return 1+my_strlen(str + 1);
}

int main()
{
	char *str = "abcxyz";
	int len=my_strlen(str);
	printf("%d\n", len);
	return 0;
}
*/