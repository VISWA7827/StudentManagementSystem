#ifndef STUDENT_H
#define STUDENT_H
#include<time.h>
typedef struct student{
    long long int AdhaarNo;
    char Surname[30];
    char StudentName[30];
    char FatherName[30];
    long long int FatherAdhaarNo;
    long long int PhoneNo;
    int Stuclass;
    int age;
    char gender;
    time_t AdmissionTime;
}STUDENT;
extern int TotalStudents;
extern STUDENT *Students;
void StudentAdd();
void StudentDelete();
void StudentTraversal();
int CheckDetails();
void SaveStudents();
void SortedStudentsByAdhaar();
void DisplaySavedStudents();
#endif