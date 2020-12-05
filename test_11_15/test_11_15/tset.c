#include<stdio.h>

int main()
{
	int a;

	int a = 10;
	int *p=&a;
	
	int a = 10;
	int *p = &a;
	int **p = &p;

	int arr[10];

	int *a[10];

	int (*a)[10];

	int (*a)(int);

	int (*a[10])(int);



	/*char str[] = "Hello bit.";
	char *str = "Hello bit.";*/
	return 0;
}


