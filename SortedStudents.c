#include"student.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void SortedStudentsByAdhaar()
{
    STUDENT temp;
    for(int i=0;i<TotalStudents;i++)
    {
        for(int j=0;j<TotalStudents-i-1;j++)
        {
            if(Students[j].AdhaarNo>Students[j+1].AdhaarNo)
            {
                temp=Students[j];
                Students[j]=Students[j+1];
                Students[j+1]=temp;
            }
        }
    }
}