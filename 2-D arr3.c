#include<stdio.h>

main()
{
	 int i,j;
	 int A[3][3]; 
     float sum,avg=0; ;

    printf("Enter elements in matrix A of size 3x3: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=sum+A[i][j];
        }
    }
    avg= sum/(3*3);
    
    printf("\nSum of matrix A is :%.2f\n",sum);
    printf("\nAverage of matrix A is :%.2f\n",avg);
    
}