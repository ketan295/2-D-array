#include<stdio.h>

main()
{
   int i, j;
   int m=5,n=5;
   int a[5][5];
   int sum = 0;
   
   /*printf("Enter row and columns in matrix:");
   scanf("%d %d",&m,&n);*/

   printf("Enter the matrix elements:\n");
   
   for(i = 0; i<m; i++)
   {
      for(j = 0; j<n; j++)
      {
           scanf("%d",&a[i][j]);
      }
   }
   printf("Boundary elements in array are:\n");
   for(i = 0; i<m; i++)
   {       
      for(j = 0; j<n; j++)
      {
 
         if (i == 0 || j == 0 || i ==n-1 || j == n-1)	 		 {
            printf("%d", a[i][j]);
            sum = sum + a[i][j];
         }
         else
         printf(" ");
      }
      printf("\n");
   }
   printf("\nSum of boundary element is:%d", sum);
}