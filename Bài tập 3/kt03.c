#include <stdio.h>

int main(void) {
int i ;
for (i=1 ;i <=20 ;i++) {
  if(i%2!=0){
if( i==5|| i==11|| i==15 )
 continue ; 
printf ("\n%d",i);
}
}
  return 0;
}
