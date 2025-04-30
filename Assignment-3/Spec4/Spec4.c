
//JADEN MARDINI

//First, write a component(a pair of.c and .h files) that defines a structure
//template with two member attributes according to the following criteria :
// 
//• the first member is a student number as a single fixed length numeric field
//with a maximum length of 10 digits.
// 
//• the second member is a structure with three members according to the
//following criteria :
// 
//– first member is “first name”
//– second member is “middle name”
//– third member is “last name”
// 
//Next, write and test a program that creates and initializes an array of 4 of
//these structures(Please make up pretend names / numbers for your 4 students
//    - be sure to have at least 2 students with middle names(and the full middle
//        name must be entered) and at least 1 without any middle name.
//    Finally, write a single function that accepts an array of these structures as a
//    parameter and prints the array data in the following format :
// 
//2001041234 – LastName, FirstName MiddleInitial.
// 
//and then use this function in your program to display your student records.
//Note that only the initial of the middle name should be printed, followed by
//a period.Any of your students who lack a middle name will end the output
//line at the end of the first name

#include <stdio.h>
#include "Spec4.h"

// this function prints the student records in the specified format
void PrintStudentRecords(const Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // print the student number and name in "last, first" format
        printf("%s - %s, %s", students[i].studentNumber, students[i].name.lastName, students[i].name.firstName);

        // check if the middle name is not empty, print middle initial if present
        if (students[i].name.middleName[0] != '\0')
        {
            printf(" %c.", students[i].name.middleName[0]);          // print the middle initial with a period
        }

        printf("\n");       // newline after each student record
    }
}
