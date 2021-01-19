#include <stdio.h>

int main(void) {
   int n  ; 
   int a [ n ] ;
   
   
   printf ("nhap so luong trong phan tu = ");
   scanf ("%d", &n) ;
   

   for ( int  i = 0;i <n; ++i){
     printf ("nhap phan tu thu  %d : ",i) ;
     scanf ("%d", &a[i]) ;
     printf ("\n") ;  
    
   }
    printf (" mang a \n :") ;
    for ( int   i = 0 ; i < n ;i++){
    printf ("%d",a[i]) ;
    }

    int tong = 0 ;
    for ( int i = 0 ; i < n ;++ i  ){
     tong  = tong   + a[i]  ;
  }
      printf ("\ntong cua mang a = %d",tong) ; 
    
  return 0;
}
