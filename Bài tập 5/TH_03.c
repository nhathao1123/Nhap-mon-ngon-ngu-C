#include <stdio.h>
void mang (int a , int b , int c) ;
int main(void) {
  int a , b ,c ;
  printf ("nhap so a = ") ;
  scanf ("%d",&a) ;
  printf ("nhap so b =") ;
  scanf ("%d",&b) ; 
  printf ("nhap so c =") ;
  scanf ("%d",&c ) ; 
  mang (a,b,c) ;
  return 0;
}

  
void mang (int a , int b , int c) {

  printf ("so lon nhat la ") ;


if (a>b &&a>c) 
printf ("%d",a) ;

if (b>a&& b>c) 
printf ("%d",b) ;

if (c>a&& c>b) 
printf ("%d",c) ;

}

