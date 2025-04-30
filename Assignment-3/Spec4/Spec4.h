#ifndef SPEC4_H
#define SPEC4_H

// define a structure for the student names
typedef struct {
    char firstName[35];         // first name of the student
    char middleName[35];        // niddle name or initial (can be empty)
    char lastName[35];          // last name of the student
} Name;

// define a structure for a student record
typedef struct {
    char studentNumber[11];     // fixed-length student number (10 digits + null terminator)
    Name name;                  // embed the Name structure
} Student;

// function declaration for printing the student records
void PrintStudentRecords(const Student students[], int size);

#endif
