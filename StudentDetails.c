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
        printf("~~~Display Students~~~\n");
        for(int i=0;i<TotalStudents;i++)
        {
            printf("Student Adhaar Number is:%lld\n",Students[i].AdhaarNo);//Here print the Student Adhaar Number
            printf("Student surname is :%s\n",Students[i].Surname);//Here print Student surname
            printf("Student Name is:%s\n",Students[i].StudentName);//Here print the student Name
            printf("Student Father name is:%s\n",Students[i].FatherName);//here print the Student Father Name
            printf("Student Father Adhaar Number:%lld\n",Students[i].FatherAdhaarNo);//Here print the Student Father Adhaar Number
            printf("Students The Father phone number:%lld\n",Students[i].PhoneNo);//Here print the Student Father Phone Number
            printf("Students class is:%d\n",Students[i].Stuclass);//Here print the Student Standend
            printf("Student Age is:%d\n",Students[i].age);//Here print the Student age
            printf("Student Gender is:%c\n",Students[i].gender);//Here print the Student Gender of the Student
            printf("Student Admission time:%s\n",ctime(&Students[i].AdmissionTime));//Here print the Adimission time of the Student
        }
        printf("!...Successfully Display the Students...!\n");
    }
}