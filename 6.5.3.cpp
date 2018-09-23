#include <stdio.h>
int main(){
	float weight,height,height_M,bmi;
	
	printf("Input Your Weight : ");
	scanf("%f",&weight);
	printf("Input Your Height : ");
	scanf("%f",&height);
	height_M=height/100;
	bmi=(weight/(height_M*height_M));
	printf("\nYour BMI is %.2f\n",bmi);
	
    if(bmi<=18.5){
     	printf("Less weight");
	}else if ((bmi>=18.5)&&(bmi<=22.9)){
	 	printf("Normal");
	}else if((bmi>=23)&&(bmi<=24.9)){
	 	printf("Plump");
	}else if((bmi>=25)&&(bmi<=29.9)){
	 	printf("Fat");
	}else if(bmi>=30){
		printf("Very Fat");
	}
	
}
