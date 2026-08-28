#include"student.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void DisplaySavedStudents()
{
    char Buffer[256];
    FILE *fp=fopen("StudentList.txt","r");
    if(fp==NULL)
    {
        printf("File does not create in your folder\n");
        printf("If you want to create the file then press the option 1 then go back to the main memu the press the savedstudents\n");
        int op;
        scanf("%d",&op);
        if(op==1)
        {
            return;
        }
    }
    else 
    {
        printf("---Saved Student list---\n");
        while(fgets(Buffer,sizeof(Buffer),fp)!=NULL)
        {
            printf("%s",Buffer);
        }
    }
}