#include <stdio.h>
int main(){
	int number;
	printf("Ban hay nhap mot so am hoac so duong ");
	scanf("%d",&number);
	if(number>0){
		printf("So %d la so duong", number);
	}else{
		printf("So %d la so am", number);
	}
}
