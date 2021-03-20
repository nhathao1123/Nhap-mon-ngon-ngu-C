#include <stdio.h>

int main(void) {
  int n ;  int c = 0 ;

printf ("nhap n bat ky = ") ;
scanf ( "%d" , &n ) ; 

for (int i=1; i <= n ; i++) {
c+= i*i;
}
printf ("\nTổng số là :%d " ,c) ;



  return 0;
}
