#include <stdio.h>

int main(void) {
int b [4] = {3,5,7,2} ; 
int c ;
for (   c = 0 ; c < 4; c++){
 printf ("%d\n", b[c] );
}
 int tong = 0 ;
 for ( c = 0 ; c < 4; c++) {
 	tong = tong + b[c] ;
 	printf ("tong so = %d\n",tong) ;
 }
 return 0;
}
