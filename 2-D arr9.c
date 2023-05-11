#include<stdio.h>

main()
{
	int i, j;
 	int row, column;
 	int cross_diagonal_sum;
 	int a[10][10];
 	int sum1,sum2 = 0;
  
 	printf("\nPlease Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\nPlease Enter the Matrix Elements :\n");
 	for(row = 0; row < i; row++)
  	{
   		for(column= 0;column< j;column++)
    	{
      		scanf("%d", &a[row][column]);
    	}
  	}
  	for(row = 0; row < i; row++)
  	{
  		sum1 = sum1 + a[row][row];
  	}
   	  
 	for(row= 0; row< i; row++)
  	{
   		sum2= sum2 + a[row][i - row - 1];
  	}
  	cross_diagonal_sum=sum1+sum2;
 
 	printf("\n The Sum of cross-Diagonal Elements of a Matrix =  %d",cross_diagonal_sum );
}