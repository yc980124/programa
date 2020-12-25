#include <stdio.h>
#include <memory.h>
#include <assert.h>

/*
size_t my_strlen(const char *string)
{
	assert(string);               //检查合法性
	char *str = (char*)string;    //保护参数
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
	assert(strDestination && strSource);    //检查合法性

	char *dest = (char*)strDestination;     //保护参数
	char *src = (char*)strSource;

	while (*src)           //相当于while（*src != '\0'）
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';         //给目标空间结尾加字符串结束标志
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
	assert(string1 && string2);          //检查合法性

	char *str1 = (char*)string1;         //保护参数
	char *str2 = (char*)string2;
	
	int size1 = strlen(str1);            //判断长度
	int size2 = strlen(str2);
	if (size1 > size2)
		return 1;
	else if (size1 < size2)
		return -1;
	
	while (*str1)                       //经过前面的判断长度之后，能运行到这里肯定是两字符串长度相等的情况
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
	assert(strDestination && strSource);         //检查合法性

	const char *src = (const char*)strSource;    //保护参数
	char *dest = (const char*)strDestination;
	char *pdest = dest;
	while (*pdest != '\0')       // 找到目标空间的尾部，即目标空间'\0'的位置
	{
		pdest++;
	}
	while (*src != '\0')        //在目标空间的'\0'位置链接
	{
		*pdest = *src;
		src++;
		pdest++;
	}
	*pdest = '\0';           //给目标空间结尾加字符串结束标志
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
	assert(str1 && str2);                   //检查合法性
	const char *str = (const char*)str1;    //保护参数
	const char *substr = (const char*)str2;
	char *pstr = NULL;

	if (*substr == '\0')        //防止子串是空串
		return str1;            //子串是空串时，返回字符串         

	while (*str)         //相当于while（*src != '\0'）
	{
		pstr = str;
		substr = str2;      //每次循环时，都会回到子串的首地址
		while (*pstr && *substr && (*pstr == *substr))   //若是假子串，在往后循环时就会被检测出来。
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
	strncpy(pch, "sample", 6);     //规定复制字符个数的字符串复制函数
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
	printf("%s\n", str1);  //memcpy函数不用主动在目的处加\0。若复制的长度超过dest的长度并且没有把src里面的\0复制，
	                        //会有随机值，此时加了\0也无用。
	return 0;
}
*/





// 字符串 移动函数
void *my_memmove(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);      //检查合法性
	char *str1 = (char *)dest;                //保护参数
	char *str2 = (const char *)src;

	if (str1 > str2 && str1<str2 + count)    //出现重叠
	{
		str2 = str2 + count - 1;
		str1 = str1 + count - 1;
		while (count-- > 0)
		{
			*str1-- = *str2--;   //从下一个开始算。如str=abcde，若src=str+2，那么src = cde...
		}
	}
	else                       //没有重叠的情况
	while (count-- > 0)
	{
		*str1++ = *str2++;
	}
}

int main()
{
	char str1[] = {"abcdefghijk"};
	char *str2 = "oooooo";
	my_memmove(str1 + 5, str1 + 2, 5);   //从下一个开始算
	//memmove(str1 + 5, str1 + 2, 5);        //复制是一个字母一个字母复制，不是一串一串的复制
	puts(str1);

	memcpy(str1 + 5, str1 + 2, 5);      //memmove 和 memcpy 的比较
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
