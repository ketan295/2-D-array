#include<stdio.h>
 
int main()
{
 	int i, j;
 	int row, column;
 	int a[10][10];
 	int Sum = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(row = 0; row < i; row++)
  	{
    	
  	}
   	  
 	for(row= 0; row< i; row++)
  	{
   		Sum = Sum + a[row][i - row - 1];
  	}
 
 	printf("\n The Sum of Anti-Diagonal Elements of a Matrix =  %d", Sum );
}