#include <stdio.h>
int main(){
	int elecold, elecnew, elecmoney;
	printf("Ban hay nhap so dien dau thang: ");
	scanf("%d",&elecold);
	printf("Ban hay nhap so dien cuoi thang: ");
	scanf("%d",&elecnew);
	int elecmonth=elecnew - elecold;
	if(0<=elecmonth && elecmonth < 50){
		elecmoney= elecmonth * 10000;
		printf("So tien dien trong 1 thang cua ban la %d", elecmoney);
	}else if(50<=elecmonth && elecmonth <100){
		elecmoney= elecmonth * 15000;
		printf("So tien dien trong 1 thang cua ban la %d", elecmoney);
	}else if(100<=elecmonth && elecmonth <150){
		elecmoney= elecmonth * 20000;
		printf("So tien dien trong 1 thang cua ban la %d", elecmoney);
	}else if(150<=elecmonth && elecmonth < 200){
		elecmoney= elecmonth * 25000;
		printf("So tien dien trong 1 thang cua ban la %d", elecmoney);
	}else{
		elecmoney= elecmonth * 30000;
		printf("So tien dien trong 1 thang cua ban la %d", elecmoney);
	}
}
