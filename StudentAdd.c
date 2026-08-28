#include"Student.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
void StudentAdd()
{
    if(TotalStudents==-1){
        Students=malloc(1*sizeof(STUDENT));//Allocating memory to Student Structure
    }
    else
    {
        Students=(STUDENT*)realloc(Students,(TotalStudents+2)*sizeof(STUDENT));//Allocating memory to Student Structure
    }
    printf("!!!Enter the Correct Details of the Student!!!");
    printf("Enter the Adhaar NUmber:");
    scanf("%lld",&Students[TotalStudents].AdhaarNo);//Assigning Adhaar Student Number
    printf("Enter the Surname:");
    scanf("%s",Students[TotalStudents].Surname);//Assigning Surname of Student
    printf("Enter the Student Name:");
    scanf(" %[^\n]",Students[TotalStudents].StudentName);//Assign Student Name
    printf("Enter the Father Name:");
    scanf(" %[^\n]",Students[TotalStudents].FatherName);//Assign Student Father Name
    printf("Enter the Father Adhaar Number:");
    scanf("%lld",&Students[TotalStudents].FatherAdhaarNo);//Assign Student Father Adhaar Number
    printf("Enter the Phone Number:");
    scanf("%lld",&Students[TotalStudents].PhoneNo);//Assign Student Father phone Number
    printf("Enter the Student class:");
    scanf("%d",&Students[TotalStudents].Stuclass);//Assign Student Class 
    printf("Enter the Age of the Student:");
    scanf("%d",&Students[TotalStudents].age);//Assign Student Age
    printf("Enter the Gender(M/F):");
    scanf(" %c",&Students[TotalStudents].gender);//Assign Student Gender
    Students[TotalStudents].AdmissionTime=time(NULL);//Assign the Student Admission time
    int a=CheckDetails();//calling the checkdetails function because if the valid details and also return the values
    if(a==0)
    {
        printf("Students Details are Correct...\n");
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