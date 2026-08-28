#include"student.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
STUDENT *Students = NULL;
int TotalStudents=-1;
int main()
{
    int choice;
    do
    {
        printf("1.Add Student\n");
        printf("2.Delete The Student\n");
        printf("3.Save The Students\n");
        printf("4.Traversal or Display Students\n");
        printf("5.Sorted the Students By Adhaar and Class\n");
        printf("6.Display the Saved students\n");
        printf("7.Exit\n");
        printf("Enter Your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            if(TotalStudents==-1)
            {
            TotalStudents++;
            }
            StudentAdd();
            printf("Successfully Inserted or Added Student\n");
            break;
            case 2:
            StudentDelete();
            break;
            case 3:
            SaveStudents();
            break;
            case 4:
            StudentTraversal();
            break;
            case 5:
            SortedStudentsByAdhaar();
            break;
            case 6:
            DisplaySavedStudents();
            break;
            case 7:
            printf("Succesfully exit");
            break;
            default:printf("Please Enter the Valid Option\n");
        }
    }while(choice!=7);
}
