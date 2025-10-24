#include <stdio.h>
#include "Spec4.h"

void PrintStudentRecords(const Student students[], int size) {
    if (!students || size <= 0) return;
    
    for (int i = 0; i < size; i++) {
        printf("%s - %s, %s", 
               students[i].studentNumber, 
               students[i].name.lastName, 
               students[i].name.firstName);
        
        if (students[i].name.middleName[0] != '\0') {
            printf(" %c.", students[i].name.middleName[0]);
        }
        
        printf("\n");
    }
}
