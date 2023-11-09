#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char src[30] = "happy C programming";
    

    printf("its\"%s\" length  : %lu", src, strlen(src));
    system("PAUSE");
    return 0;
}