#include "pointer.h"

void
showMalloc(int pointerValue)
{
    int *p = malloc(sizeof(int));

    printf("Address : %p\n", p);
    printf("Value   : %d\n", *p);

    *p = pointerValue;

    printf("Address : %p\n", p);
    printf("Value   : %d\n", *p);
    
    free(p);
}

void
showCalloc(int pointerValue)
{
    int *p = calloc(1, sizeof(int));

    printf("Address : %p\n", p);
    printf("Value   : %d\n", *p);

    *p = pointerValue;

    printf("Address : %p\n", p);
    printf("Value   : %d\n", *p);

    free(p);
}

void 
pointerTest()
{
    showMalloc(100);
    showCalloc(100);
}