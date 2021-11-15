#pragma once
#include "Person.h"

typedef struct _perArray
{
    Person arr[1000];
    int perCount;
} PersonArray;

void InitPersonArray(PersonArray* pa);

void UninitPersonArray(PersonArray* pa);

void AddPersonArray(PersonArray* pa);

void PrintPersonArray(PersonArray* pa);

void SearchPersonArray(PersonArray* pa);

void RemovePersonArray(PersonArray* pa);

void WriteTextPersonArray(PersonArray* pa);

