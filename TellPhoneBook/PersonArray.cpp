#include "PersonArray.h"

void InitPersonArray(PersonArray* pa)
{
    pa->perCount = 0;
}
void UninitPersonArray(PersonArray* pa)
{
    pa->perCount = 0;
}
void AddPersonArray(PersonArray* pa)
{
    Person per;

    InputPerson(&per);
    pa->arr[pa->perCount++] = per;
}
void PrintPersonArray(PersonArray* pa)
{
    for (int i = 0; i < pa->perCount; ++i)
        PrintPerson(&pa->arr[i]);
}