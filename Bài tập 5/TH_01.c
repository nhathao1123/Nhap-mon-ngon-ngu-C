#include <stdio.h>
int main() {
  // khai bao bien
  float a,b,c,x1,x2,delta;
  // Nhap so a,b,c  tu ban phim
  printf("Nhap so a : ");
  scanf("%f", &a);
  printf("Nhap so b : ");
  scanf("%f", &b);
  printf("Nhap so c : ");
  scanf("%f", &c);
  delta = b*b - 4*a*c;
  // Dieu kien
  if(delta < 0){
    x1=x2=0.0;
    printf("Phuong trinh vo nghiem");
  }
  else if(delta == 0)
