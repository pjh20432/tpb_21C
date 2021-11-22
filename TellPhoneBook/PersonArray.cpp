#include<stdio.h>
#include<string.h>
#include "PersonArray.h"

void InitPersonArray(PersonArray* pa) //personarray에서 person데이터를 다루기 때문에 비효율적
{
    FILE* fp;
    
    pa->perCount = 0;
    //데이터 복구

    //데이터 저장
    
    fopen_s(&fp, "tpb.bdf", "rb");
    
    if (fp == NULL)
    {
        printf("파일이 존재하지 않는다. 실패!\n");
        return;
    }
    
    //header
    fread(&pa->perCount, sizeof(int), 1, fp);
    //body
    for (int i = 0; i < pa->perCount; ++i)
    {
        fread(pa->arr[i].name, 20, 1, fp);
        fread(pa->arr[i].phone, 20, 1, fp);
    }
    fclose(fp);
}

void UninitPersonArray(PersonArray* pa)
{
    //데이터 저장
    FILE* fp;
    fopen_s(&fp, "tpb.bdf", "wb");
   
    if (fp == NULL)
    {
        printf("파일 출력 실패!\n");
        return;
    }
    
    //header
    fwrite(&pa->perCount, sizeof(int), 1, fp);
    //body
    for (int i = 0; i < pa->perCount; ++i)
    {
        fwrite(pa->arr[i].name, 20, 1, fp);
        fwrite(pa->arr[i].phone, 20, 1, fp);
    }
    fclose(fp);

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
void SearchPersonArray(PersonArray* pa)
{
    char name[20];
    printf("검색 이름 입력:");
    gets_s(name, 20);
    for (int i = 0; i < pa->perCount; ++i)
    {
        if (strcmp(name, pa->arr[i].name) == 0)
        {
            printf("찾은 이름: [%d]", i);
            PrintPerson(&pa->arr[i]);
            break;
        }
    }
}


void RemovePersonArray(PersonArray* pa)
{
    char name[20];
    printf("삭제 이름 입력:");
    gets_s(name, 20);
    for (int i = 0; i < pa->perCount; ++i)
    {
        if (strcmp(name, pa->arr[i].name) == 0)
        {
            printf("삭제할 이름: [%d]", i);
            PrintPerson(&pa->arr[i]);
            
            for (int j = i; j < pa->perCount - 1; ++j)
            {
                pa->arr[j] = pa->arr[j + 1];
                --pa->perCount;
                printf("삭제완료\n");
            }
            break;
        }
    }
}

void WriteTextPersonArray(PersonArray* pa)
{
    FILE* fp = NULL;

    fopen_s(&fp, "telphonebook.txt", "w");
    
    if (fp == NULL)
        return;
    
    for (int i = 0; i < pa->perCount; ++i)
    {
        fprintf(fp, "Person :[%d] - name:%s , phone:%s\n",i, pa->arr[i].name, pa->arr[i].phone);

    }

    fclose(fp);
}