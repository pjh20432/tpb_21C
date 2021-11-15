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
		puts("메뉴를 선택하시오:");
		char c = getchar(); getchar();
		switch (c)
		{
		case'1':
			printf("기능 1\n");
			break;
		case'2':
			printf("기능 1\n");
			break;
		case'3':
			printf("기능 1\n");
			break;
		case'4':
			printf("기능 1\n");
			break;
		case'5':
			printf("기능 1\n");
			break;
		case'0':
			run = 0;
			break;

		}
	}

}