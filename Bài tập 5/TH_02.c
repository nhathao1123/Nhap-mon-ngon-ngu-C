#include <stdio.h>

int main(void) {
  int i , n ,  tong = 0 ;
  printf ( "nhap n :") ;
  scanf ("%d",&n) ; 

  for (int i=1;i<=n;i++) {
   tong = tong + i ; 
  }
  printf ("\s+1+2...+%d ",tong) ;
  return 0;
}

