#include"student.h"
#include<stdio.h>//input and output header file
#include<conio.h>//operations like sqrt,pow
#include<stdlib.h>//malloc ,calloc ,free,realloc
#include<time.h>//to access the current time
void SaveStudents()
{
    FILE *fp;
    int option;
    printf("Before the Save or Retrive the data Must be file create in the same folder\n");
    printf("If you want to create the file then press the option 1:");
    scanf("%d",&option);
    if(option==1)
    {
        FILE *fp1=fopen("StudentList.txt","w");
    }
    fp=fopen("StudentList.txt","a+");
    if(fp==NULL)
    {
        printf("File does exit\n");
    }
    else
    {
    for(int i=0;i<TotalStudents;i++)
    {
        fprintf(fp,"Student Adhaar Number is:%lld\n",Students[i].AdhaarNo);
        fprintf(fp,"Student surname is :%s\n",Students[i].Surname);
        fprintf(fp,"Student Name is:%s\n",Students[i].StudentName);
        fprintf(fp,"Student Father name is:%s\n",Students[i].FatherName);
        fprintf(fp,"Student Father Adhaar Number:%lld\n",Students[i].FatherAdhaarNo);
        fprintf(fp,"Students The Father phone number:%lld\n",Students[i].PhoneNo);
        fprintf(fp,"Students class is:%d\n",Students[i].Stuclass);
        fprintf(fp,"Student Age is:%d\n",Students[i].age);
        fprintf(fp,"Student Gender is:%c\n",Students[i].gender);
        fprintf(fp,"Student Admission time:%s\n",ctime(&Students[i].AdmissionTime));
    }
}
fclose(fp);
}