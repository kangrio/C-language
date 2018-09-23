#include <stdio.h>
int main(){
	float unit,price,price_total;
	

	printf("Input Your Unit : ");
	scanf("%f",&unit);
	
	if((unit>=1)&&(unit<=5)){
		price=0;
	}else if((unit>=6)&&(unit<=15)){
		price=1.3576;
	}else if((unit>=16)&&(unit<=25)){
		price=1.5445;
	}else if((unit>=26)&&(unit<=35)){
		price=1.7968;
	}else if((unit>=36)&&(unit<=100)){
		price=2.1800;
	}else if((unit>=101)&&(unit<=150)){
		price=2.2734;
	}else if((unit>=151)&&(unit<=400)){
		price=2.7781;
	}else if(unit>=401){
		price=2.9780;
	}
	
	price_total=price*unit;

	printf("\nUnit = %.4f Unit",unit);
	printf("\nprice per Unit = %.4f Baht",price);
	printf("\nPrice Total = %.4f Baht",price_total);
	
}
