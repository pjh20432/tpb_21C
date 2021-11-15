#include<stdio.h>
#include "Person.h"

void InputPerson(Person* p)
{
    printf("사람의 이름: ");
    gets_s(p->name, 20);
    printf("사람의 전화번호: ");
    gets_s(p->phone, 20);
}
void PrintPerson(Person* p)
{
    printf("Person: name:%s, phone:%s\n", p->name, p->phone);
}