#include <stdio.h>
int main(){
	int number;
	printf("Hay nhap mot so nguyen: ");
	scanf("%d",&number);
	if(number%2==0){
		printf("So %d la so chan", number);
	}else{
		printf("So %d la so le", number);
	}
}
