#include <stdio.h>  
   
main()  
{  
    int rows, cols, sumRow, sumCol;    
    int a[3][3] = {     
                    {11, 22, 33},  
                    {44, 55, 66},  
                    {77, 88, 99}  
                };
    int i,j;  
      
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a[0])/sizeof(a[0][0]));  
      
    for(i = 0; i < rows; i++)
    {  
        sumRow = 0;  
        for( j = 0; j < cols; j++)
        {  
          sumRow = sumRow + a[i][j];  
        }  
        printf("Sum of  row%d: %d\n", (i+1), sumRow); 
    }
}  