#include <stdio.h>

int main(void) {
int a [4] = {3,5,7,2}; int i , sum= 0 ;
for ( int  i = 0 ;i < 4; ++i){ printf ("%d\n", a[i] );
  sum+=a[i] ;
}  
printf ("tong so = %d",sum);
 return 0;
}
