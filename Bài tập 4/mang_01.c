#include <stdio.h>

int main(void) {
int b [4] = {3,5,7,2};  
for ( int  i = 0 ;i < 4; ++i){
 printf ("%d\n", b[i] );
}
 int tong =0 ;
 for (int i =0;i<4;++i) {
 	tong = tong + b[i] ;
 	printf ("tong so = %d\n",tong) ;
 }
 return 0;
}
