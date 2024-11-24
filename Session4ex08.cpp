#include <stdio.h>
int main(){
	int a, b, c;
	printf("Hay nhap chieu dai canh a: ");
	scanf("%d",&a);
	printf("Hay nhap chieu dai canh b: ");
	scanf("%d",&b);
	printf("Hay nhap chieu dai canh c: ");
	scanf("%d",&c);
	if(a+b>c && b+c>a && c+a>b){
		printf("Là 3 canh cua tam giac");
	}else{
		printf("Khong phai 3 canh cua tam giac");
	}
}
