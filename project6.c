#include <stdio.h>
int main()
{
    int i, j;
    int arr[3][3];
    printf("Input elements in the matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
    printf("\n\n");

    return 0;
}
