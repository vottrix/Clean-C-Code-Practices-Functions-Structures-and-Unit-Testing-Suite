#include <stdio.h>
#include "Spec4.h"

int main() {
    Student students[] = {
        {"2363426431", {"Michael", "B", "Jordan"}},
        {"1234213552", {"Elon", "", "Musk"}},
        {"7890756433", {"Steve", "Jobs", "Apple"}},
        {"4484754904", {"Robert", "Downey", "Junior"}}
    };
    
    PrintStudentRecords(students, 4);
    return 0;
}
