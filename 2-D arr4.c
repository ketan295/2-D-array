#include<stdio.h>

main()
{
	
	 int i,j;
	 int A[3][3];
	 int B[3][3];
	 int C[3][3];
	 int sum;

    printf("Enter elements in matrix A of size 3x3: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
       printf("Enter elements in matrix B of size 3x3: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
      for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\n sum of matrix A and B is :\n");
      for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}