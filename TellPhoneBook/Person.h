#pragma once

typedef struct _person
{
    char name[20];
    char phone[20];
} Person;
void InputPerson(Person* p);
void PrintPerson(Person* p);
