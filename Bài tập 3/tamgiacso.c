#include <stdio.h>

int main (void) 
{
	int i,j;
	int n;
	printf("Nhap vao n= ");
	scanf("%d",&n);
	for (i=1; i<= n ; i++ )
    {
    	printf("\n");
    	for(j=1;j<=i;j++)
   	    {
		   printf("%d ",j);
		}
	}
	return 0 ;	
}
