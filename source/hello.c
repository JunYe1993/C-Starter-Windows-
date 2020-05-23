#include "hello.h"

static int
helloIntro(char **str)
{
    static int count = 0;
    ++count;
    // char helloText[] = "Hello, I am Daniel";
    *str = malloc(sizeof(char) * 20);
    *str = "Hello, I am JunYe";
    return count;
}

void 
helloTest()
{
    char *intro;
    helloIntro(&intro);
    helloIntro(&intro);
    helloIntro(&intro);
    printf("Intro : %s\n", intro);
    printf("Call times: %d\n", helloIntro(&intro));
}