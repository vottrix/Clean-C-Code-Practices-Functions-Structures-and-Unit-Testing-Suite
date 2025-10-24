#ifndef SPEC4_H
#define SPEC4_H

#define MAX_NAME_LENGTH 35
#define STUDENT_NUMBER_LENGTH 11

typedef struct {
    char firstName[MAX_NAME_LENGTH];
    char middleName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
} Name;

typedef struct {
    char studentNumber[STUDENT_NUMBER_LENGTH];
    Name name;
} Student;

// Prints student records in format: "StudentNumber - LastName, FirstName MiddleInitial."
void PrintStudentRecords(const Student students[], int size);

#endif
