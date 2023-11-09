#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE* fp;
    char str[100];
    fp = fopen("sample.txt", "w");

    for (int i = 0;i<3;i++)
    {
       printf("input a word :\n");
       scanf("%s",str);
       fprintf(fp,"%s",str);  
    }
   
    fclose(fp);

    system("PAUSE");
    return 0;
}
