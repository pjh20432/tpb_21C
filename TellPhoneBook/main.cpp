#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Menu() {

	puts("===================");
	puts("1. ��ȭ��ȣ ���"); //printf�� �Ȱ��� ����
	puts("2. ��ȭ��ȣ ���");
	puts("3. ��ȭ��ȣ �˻�");
	puts("4. ��ȭ��ȣ ����");
	puts("5. ��ȭ��ȣ Text ���� ���");
	puts("0. ���α׷� ����");
	puts("");
}

int main()
{
	int run = 1;
	while (run)
	{
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