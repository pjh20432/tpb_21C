#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include "Util.h"
#include "PersonArray.h"

int main()
{
	PersonArray pa;
	int run = 1;
	InitPersonArray(&pa);

	while (run)
	{
		Menu();
		puts("메뉴를 선택하시오:");
		
		char c = _getch();
		switch (c)
		{
		case'1':
			AddPersonArray(&pa);
			break;
		case'2':
			PrintPersonArray(&pa);
			break;
		case'3':
			SearchPersonArray(&pa);
			break;
		case'4':
			RemovePersonArray(&pa);
			break;
		case'5':
			WriteTextPersonArray(&pa);
			break;
		case'0':
			run = 0;
			break;

		}
	}
	UninitPersonArray(&pa);

}