#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <stdio.h>

struct student
{
    char* name;
    int grade;
    int id;
};

void structInit(void); 
void structTest(void);

#endif