#include"student.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void StudentTraversal()
{
    if(TotalStudents<=-1)
    {
        printf("There is no students to display\n");
    }
    else
    {
        for(int i=0;i<TotalStudents;i++)
        {
            printf("Student Adhaar Number is:%lld\n",Students[i].AdhaarNo);
            printf("Student surname is :%s\n",Students[i].Surname);
            printf("Student Name is:%s\n",Students[i].StudentName);
            printf("Student Father name is:%s\n",Students[i].FatherName);
            printf("Student Father Adhaar Number:%lld\n",Students[i].FatherAdhaarNo);
            printf("Students The Father phone number:%lld\n",Students[i].PhoneNo);
            printf("Students class is:%d\n",Students[i].Stuclass);
            printf("Student Age is:%d\n",Students[i].age);
            printf("Student Gender is:%c\n",Students[i].gender);
            printf("Student Admission time:%s\n",ctime(&Students[i].AdmissionTime));
        }
        printf("Total Number of students are presented %d\n",TotalStudents);
        printf("Successfully Display the Students\n");
    }
}