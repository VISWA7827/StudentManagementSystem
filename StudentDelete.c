#include"student.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void StudentDelete() {
    long long adhaar;
    printf("Enter the Adhar Number of the Student:");
    scanf("%lld", &adhaar);

    int found_index = -1;

    for(int i = 0; i < TotalStudents; i++) {
        if(Students[i].AdhaarNo == adhaar) {
            found_index = i;
            break;
        }
    }

    if(found_index == -1) {
        printf("Student with Adhaar %lld Not Found!\n", adhaar);
        return;
    }

    
    for(int j = found_index; j < TotalStudents - 1; j++) {
        Students[j] = Students[j+1];
    }

    TotalStudents--;

    if(TotalStudents > 0) {
        Students = (STUDENT*)realloc(Students, TotalStudents * sizeof(STUDENT));
    } else {
        free(Students);
        Students = NULL;
    }

    printf("Successfully Deleted The Student\n");
}