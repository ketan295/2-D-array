#include<stdio.h>

main()
{
   int i, j;
   int m,n;
   int a[5][5];
   int sum = 0;
   
   printf("Enter row and columns in matrix:");
   scanf("%d %d",&m,&n);

   printf("Enter elements in 5*5 matrix:\n");
   
   for(i = 0; i<m; i++)
   {
      for(j = 0; j<n; j++)
      {
           scanf("%d",&a[i][j]);
      }
   }
   printf("Non-Boundary elements in array are:\n");
   for(i =1; i<m-1; i++)
   {       
      for(j =1; j<n-1; j++)
      {
 
         if (i==1 || i<m-1 || j==1 || j<n-1)	 	
  
  	 {
            printf("%d ", a[i][j]);
            sum = sum + a[i][j];
       }
         else
         printf(" ");
      }
      printf("\n");
   }
   printf("\nSum of non-boundary element is:%d", sum);
}