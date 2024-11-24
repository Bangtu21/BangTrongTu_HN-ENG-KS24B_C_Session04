#include <stdio.h>
int main(){
	int year;
	printf("Ban hay nhap so nam: ");
	scanf("%d",&year);
	if(year % 4 ==0){
		printf("Day la nam nhuan");
	}else{
		printf("Day la nam khong nhuan");
	}
}
