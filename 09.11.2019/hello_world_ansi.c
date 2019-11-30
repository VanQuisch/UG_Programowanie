#include <stdio.h>
#include <math.h>

int main()
{
    #define KNRM  "\x1B[0m"
    #define KRED  "\x1B[31m"
    #define KGRN  "\x1B[32m"
    #define KYEL  "\x1B[33m"
    #define KBLU  "\x1B[34m"
    #define KMAG  "\x1B[35m"
    #define KCYN  "\x1B[36m"
    #define KWHT  "\x1B[37m"

    char name[32 + 1];
    int count = 3;

    scanf("%d", &count);
    scanf("%s", name);

    printf("count %d\n", count);

    printf(KGRN);
    printf("%s ", "Siemasz");
    printf(KNRM);

for(int i=0; i < count; i++)
    {
        printf("%s ", name);
    }

    printf("\b!\n");
}