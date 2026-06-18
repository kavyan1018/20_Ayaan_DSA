#include <stdio.h>

int main()
{

    int a[2][2];
    int i, j;

    printf("Enter the elements :\n");
    for (i = 0; i <= 1; i++)
    { // row
        for (j = 0; j <= 1; j++)
        { // cols
            scanf("%d", &a[i][j]);
        }
    }

    printf("The elements of the :\n");

    for (i = 0; i <= 1; i++)
    { // row
        for (j = 0; j <= 1; j++)
        { // cols
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}