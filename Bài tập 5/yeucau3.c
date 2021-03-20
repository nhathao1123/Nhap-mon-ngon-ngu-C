#include <stdio.h> 
 int boi_chung_nho_nhat(int a, int b);
 
 int main(){
    int a,b,cb;
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
 
 for (cb=a;cb<=a*b;cb++){
        if (cb%a==0 && cb%b==0){
            printf("BCNN(%d,%d)= %d\n",a,b,cb);
        }
    }
    return 0;
}

 int boi_chung_nho_nhat(int a, int b) {
 	
 	return 0;
 }
