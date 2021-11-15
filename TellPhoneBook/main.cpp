#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include "Util.h"
#include "Person.h"

int main()
{
	Person p1;
	int run = 1;
	while (run)
	{
		Menu();
		puts("메뉴를 선택하시오:");
		//char c = getchar(); Flush();
		char c = _getch();
		switch (c)
		{
		case'1':
			InputPerson(&p1);
			break;
		case'2':
			PrintPerson(&p1);
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