#include"Student.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
void StudentAdd()
{
    if(TotalStudents==-1){
        Students=malloc(1*sizeof(STUDENT));
    }
    else
    {
        Students=(STUDENT*)realloc(Students,(TotalStudents+2)*sizeof(STUDENT));
    }
    printf("Enter the Adhaar NUmber:");
    scanf("%lld",&Students[TotalStudents].AdhaarNo);
    printf("Enter the Surname:");
    scanf("%s",Students[TotalStudents].Surname);
    printf("Enter the Student Name:");
    scanf(" %[^\n]",Students[TotalStudents].StudentName);
    printf("Enter the Father Name:");
    scanf(" %[^\n]",Students[TotalStudents].FatherName);
    printf("Enter the Father Adhaar Number:");
    scanf("%lld",&Students[TotalStudents].FatherAdhaarNo);
    printf("Enter the Phone Number:");
    scanf("%lld",&Students[TotalStudents].PhoneNo);
    printf("Enter the Student class:");
    scanf("%d",&Students[TotalStudents].Stuclass);
    printf("Enter the Age of the Student:");
    scanf("%d",&Students[TotalStudents].age);
    printf("Enter the Gender(M/F):");
    scanf(" %c",&Students[TotalStudents].gender);
    Students[TotalStudents].AdmissionTime=time(NULL);
    int a=CheckDetails();
    if(a==0)
    {
        printf("Students Details are Correct\n");
        TotalStudents++;
    }
    else
    {
        if(a==1){
            printf("Invalid Student Adhaar Number\n");
        }
        if(a==2)
        {
            printf("Invalid Father Adhaar Number\n");
        }
        if(a==3)
        {
            printf("Invalid Phone Number\n");
        }
        if(a==4)
        {
            printf("Invalid class\n");
        }
        if(a==5)
        {
            printf("Invalid Age\n");
        }
        if(a==6)
        {
            printf("Invalid Gender\n");
        }
        if(a==7)
        {
            printf("Student adhaar and Father adhaar number is same\n");
        }
        StudentAdd();
    }
    
}