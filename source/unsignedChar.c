#include "unsignedChar.h"

static void
unsignedcharShowFormat(unsigned char value)
{
    char c = value;
    unsigned char uc = value;
    int char_to_int = c;
    int unchar_to_int = uc;
    unsigned int char_to_unint = c;
    unsigned int unchar_to_unint = uc;
    printf("%%c: %c, %c\n", c, uc);
    printf("%%X: %X, %X\n", c, uc);
    printf("%%d: %d, %d\n", char_to_int, unchar_to_int);
    printf("%%u: %u, %u\n", char_to_unint, unchar_to_unint);
}

void 
unsignedcharTest()
{
    unsignedcharShowFormat(0x7F); // 0111 1111 符號 bit 為 0 不會擴展
    unsignedcharShowFormat(0x80); // 1000 0000 符號 bit 為 1 會擴展，補 1
}

