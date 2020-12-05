#include "contact.h"

int main(int argc,char *argv[])
{
	Contact_t cont;
	ContactInit(&cont);

	int select = 1;
	while (select)
	{
		printf("*******************************************\n");
		printf("**[1] AddContact      [2] DelContact     **\n");
		printf("**[3] FindContact     [4] ShowContact    **\n");
		printf("**[5] ModifyContact   [6] SortContact    **\n");
		printf("**[7] ClearContact    [8] DestroyContact **\n");
		printf("**[0] ExitContact                        **\n");
		printf("*******************************************\n");
		printf("��ѡ��:>");
		scanf("%d", &select);

		if (select == EXIT)
			break;
		switch (select)
		{
		case ADD:
			break;
		case DEL:
			break;
		case FIND:
			break;
		case SHOW:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case CLEAR:
			break;
		case DESTROY:
			break;
		}
	}
	return 0;
}