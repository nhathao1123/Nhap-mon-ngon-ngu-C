#include <stdio.h>    Tạm Thời Thối Nhé !!

int main(void) {
 // h =1 
// 1 hang 1* , 0 khoang trong
// h = 2  
// 2 hang 
// - hang 1 ; 1 * , 2 trang 
// - hang 2 ; 3* , 0 trang
int h=3  ; 
// hang 1 
printf (" "); //  in ra trong 2 trang                     
printf ("*"); // in 1 *
printf ("\n "); // ket thuc hang 1

// hang 2 
printf (""); // in ra 1 trang 
printf ("***");// in 3 * 
printf ("\n "); // ket thuc 2

// hang 3 
printf ("");// in re 0 trang 
printf ("*****");// in 5 * 
printf ("\n"); // ket thuc 3

for (int i =1; i <= 3 ; i++) {
  printf ("hang %d ",i);
}
 
  return 0; 
}
