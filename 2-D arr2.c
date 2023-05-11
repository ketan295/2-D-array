#include<stdio.h>

main()
{
	int a[5][4]={{1,2,3,4},
						{4,5,6,7},
						{2,3,4,5},
						{5,6,7,8},
						{6,7,8,9}};
	
	int row=sizeof(a)/sizeof(a[0]);
	int col=sizeof(a[0])/sizeof(a[0][0]);
	
	printf("length of row is:%d\n",row);
	printf("length of row is:%d\n",col);			}