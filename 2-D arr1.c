#include <stdio.h>

main()

{
    int A[3][3]; 
    int row, col;

    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
}