#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Menu() {

	puts("===================");
	puts("1. 전화번호 등록"); //printf와 똑같은 역할
	puts("2. 전화번호 출력");
	puts("3. 전화번호 검색");
	puts("4. 전화번호 삭제");
	puts("5. 전화번호 Text 파일 출력");
	puts("0. 프로그램 종료");
	puts("");
}

int main()
{
	int run = 1;
	while (run)
	{
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