#include <stdio.h>
int main()
{
    int no[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    char name[10];
    int i, j;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("\nHello %s", name);
    /*for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%3d", no[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}