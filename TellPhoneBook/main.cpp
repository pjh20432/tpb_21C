#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Util.h"


int main()
{
	int run = 1;
	while (run)
	{
		Menu();
		puts("�޴��� �����Ͻÿ�:");
		char c = getchar(); getchar();
		switch (c)
		{
		case'1':
			printf("��� 1\n");
			break;
		case'2':
			printf("��� 1\n");
			break;
		case'3':
			printf("��� 1\n");
			break;
		case'4':
			printf("��� 1\n");
			break;
		case'5':
			printf("��� 1\n");
			break;
		case'0':
			run = 0;
			break;

		}
	}

}