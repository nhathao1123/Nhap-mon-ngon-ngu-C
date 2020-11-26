#include <stdio.h>

int main (){ 
	
   // khai bao bien a, b kieu so nguyen 
    int a,b; 
   // khoi tao bien a=3
    a=3;
   // khoi tao bien b=5
    b=5;
   // khai bao cac bien trong ,hieu, tich 
    int tong, hieu, tich;
   // khai bao bien thuong
   double thuong;
   // gan tong a + b 
   tong = a + b;
   // gan hieu a - b 
   hieu = a - b;
   // gan tich a * b
   tich = a * b;
   //gan thuong a / b va ep kieu  
   thuong =(double)a /b;
   // hien thi ra man hinh tong = 8, hieu = -2, tich = 15, thuong = 0.6
   printf("a + b = %d, a - b =%d, a * b = %d, a / b = %0.1f", tong, hieu , tich, thuong);
   getchar();
   return 0;
}
   
