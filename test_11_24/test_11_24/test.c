#include <stdio.h>
#include <assert.h>


int main()
{
	struct S1
	{
		char c1;
		int i;
		char c2;
	};
	struct S2
	{
		char c1;  //1
		char c2;   //1+2
		int i;    //4
	};
	printf("%d", sizeof(struct S2));
	return 0;
}

/*
void *my_memset(void *dest, int c, size_t count)
{
	assert(dest != NULL);
	char *pdest = (char *)dest;
	while (count-- > 0)
	{
		*pdest= c;
		pdest++;
	}
	return dest;
}

void *my_memcpy(void *dest, const void *src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char *pdest = (char *)dest;
	const char *psrc = (const char *)src;

	if (psrc < pdest && pdest<psrc + count)
	{
		psrc = psrc + count - 1;
		pdest = pdest + count - 1;
		while (count-- > 0)
		{
			*pdest-- = *psrc--;
		}
	}
	else
	{
		while (count-- > 0)
		{
			*pdest++ = *psrc++;
		}
	}

	return dest;
}
int my_memcmp(const void *buf1, const void *buf2, size_t count)
{
	assert(buf1 != NULL && buf2 != NULL);
	const char *pbuf1 = (const char *)buf1;
	const char *pbuf2 = (const char *)buf2;

	while (count-- > 0)
	{
		if ((*pbuf1 - *pbuf2) != 0)
			break;
		pbuf1++;
		pbuf2++;
	}
	return (*pbuf1 - *pbuf2);
}

int main()
{
	char str[20] = "abcdefghijk";
	//memcpy(str+2, str, 4);
	my_memcpy(str+4, str+1, 3);    //×Ö·û´®µÄÄÚ´æÖØµþ

	printf("%s\n", str);
	return 0;
}
*/

//int main()
//{
//	
//	char str[20];
//	char *str1 = "abcxyz";
//	my_memset(str, 1, sizeof(str));
//	my_memcpy(str, str1, strlen(str1)+1);
//	int ret = my_memcmp(str, str1, strlen(str1));
//	
//	return 0;
//}