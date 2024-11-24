#include <stdio.h>
int main(){
	int num1, num2, num3;
	printf("Nhap so thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap so thu hai: ");
	scanf("%d",&num2);
	printf("Nhap so thu ba: ");
	scanf("%d",&num3);
	if((num1<num3&&num3<num2)||(num2<num3&&num3<num1)){
		printf("So thu ba nam giua so thu nhat va so thu hai");
	}else{
		printf("So thu ba khong nam giua so thu nhat va so thu hai");
	}
}
