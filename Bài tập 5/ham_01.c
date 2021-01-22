// khai bao 
#include <stdio.h>


 
int sum (int a ,int b , int c ) ;
// khai ham main
int main () {
  int  x = 3 , y = 5 , z = 2 ;
  printf ("x+y+z=%d",sum(x,y,z)) ;
  return 0  ;
}


int sum  (int a , int b , int c ) {
  int E = a + b + c ;
   return E ;


}
