#include <stdio.h>
#include <math.h>

int main()
{
    char name[32 + 1];
    int count = 3;

    scanf("%d", &count);
    scanf("%s", name);

    printf("count %d\n", count);

    printf("%s ", "Siemasz");

for(int i=0; i < count; i++)
    {
        printf("%s ", name);
    }

    printf("\b!\n");
}