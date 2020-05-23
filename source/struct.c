#include "struct.h"

void structInit()
{
    struct student myStudents[] = {
        {[1].id = 2, [1].grade = 3, [1].name = "Marry"},
        {[0].id = 1, [0].grade = 3, [0].name = "Henry"}
    };

    printf("ID : %d-%d\tName : %s\n", myStudents[0].grade, myStudents[0].id, myStudents[0].name);
    printf("ID : %d-%d\tName : %s\n", myStudents[1].grade, myStudents[1].id, myStudents[1].name);
}

void structTest()
{
    structInit();
}