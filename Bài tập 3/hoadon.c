int main(){
	int dongia, soluong, thanhtien;
	printf("nhap don gia :",dongia);
	scanf("%d",&dongia);
	printf("nhap soluong :",soluong);
	scanf("%d",&soluong);
	thanhtien=dongia*soluong;
	if(soluong>=5 && dongia>=500) 
{ 
thanhtien=(dongia*soluong)*0.5;
	printf("%d", thanhtien);
	}
else
{
printf("%d",thanhtien);
	}
	getchar();
	return 0; 
	}
	
	
