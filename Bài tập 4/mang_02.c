#include <stdio.h>

int main(void) {
   int n ; 
   printf ("nhap so luong trong phan tu = ");
   scanf ("%d", &n) ;
   int  a [n] ;

   for (int i = 0;i <n; i++){
     printf ("nhap phan tu thu  %d : ",i+1) ;
     scanf ("%d", &a[i]) ;
     printf ("\n") ;  
    
   }
    printf (" mang a \n :") ;
    for (int i = 0 ; i < n ;i++){
    printf ("%d",a[i]) ;
    }
    
  return 0;
}
