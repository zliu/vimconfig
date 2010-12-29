#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a=0x12345678;
    char *c = (char *)(void *)&a;
    printf("%x \n", c[0]);
    return 0;
}
