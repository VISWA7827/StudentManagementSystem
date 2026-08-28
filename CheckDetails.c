#include"student.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int CheckDetails()
{
    for(int i=0;i<TotalStudents-1;i++)
    {
        if(Students[i].AdhaarNo==Students[TotalStudents-1].AdhaarNo)
        {
            printf("This Adhaar number is already exist\n");
            StudentAdd();
        }
        
    }
    if(1000000000000<Students[TotalStudents].AdhaarNo||99999999999>Students[TotalStudents].AdhaarNo)
    {
        return 1;
    }
    if(1000000000000<Students[TotalStudents].FatherAdhaarNo||99999999999>Students[TotalStudents].FatherAdhaarNo)
    {
        return 2;
    }
    if(10000000000<Students[TotalStudents].PhoneNo||999999999>Students[TotalStudents].PhoneNo)
    {
        return 3;
    }
    if(Students[TotalStudents].Stuclass<=0||Students[TotalStudents].Stuclass>=11)
    {
        return 4;
    }
    if(1)
    {
        int age=Students[TotalStudents].Stuclass+5;
        if(Students[TotalStudents].age<age)
        {
            return 5;
        }
    }
    if(Students[TotalStudents].gender=='f'||Students[TotalStudents].gender=='F'||Students[TotalStudents].gender=='m'||Students[TotalStudents].gender=='M')
    {
        return 0;
    }
    else 
    {
        return 6;
    }
    if(Students[TotalStudents].AdhaarNo==Students[TotalStudents].FatherAdhaarNo)
    {
        return 7;
    }
    return 0;
}