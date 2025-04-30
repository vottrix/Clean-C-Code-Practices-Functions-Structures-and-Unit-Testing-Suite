#include <stdio.h>
#include "Spec4.h"

int main()
{
    // array of 4 students with different names and middle name conditions
    Student students[4] = {
        {"236342643", {"Michael", "B", "Jordan"}},        // student with middle initial
        {"123421355", {"Elon", "", "Musk"}},              // student without a middle name
        {"789075643", {"Steve", "Jobs", "Apple"}},        // student with a full middle name
        {"448475490", {"Robert", "Downey", "Junior"}}     // student with a full middle name
    };

    // call the function to print the student records
    PrintStudentRecords(students, 4);

    return 0;
}
