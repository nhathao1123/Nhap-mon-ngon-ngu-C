#include <stdio.h>

int main(void) {
   int n ; 
   printf ("nhap so luong trong phan tu = ");
   scanf ("%d", &n) ;
   int  a [n] ;

   for (int i = 0;i <n; i++){
     printf ("nhap phan tu thu  %d : ",i) ;
     scanf ("%d", &a[i]) ;
     printf ("\n") ;  
    
   }
    printf (" mang a \n :") ;
    for (int i = 0 ; i < n ;i++){
    printf ("%d",a[i]) ;
    }
    
         for (int i = 0 ; i < n ;i++) { 
            if ( a [i] % 2 == 0) 
              printf ("\ncac so le trong mang"  );
              printf ("%d", a [i]) ;
            }
            for (int i = 0 ; i < n ;i++) {
              if ( a [i] % 2 == 0 ) 
                printf ("\ncac so chan trong mang " );
                printf ("%d", a [i]);
          
