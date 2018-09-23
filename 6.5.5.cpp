#include <stdio.h>
int main(){
	float temperature;
	

	printf("Input Temperature : ");
	scanf("%f",&temperature);
	

	if(temperature<=0){
		printf("Solid");
	}else if((temperature>=1)&&(temperature<=100)){
		printf("Liquid");
	}else if(temperature>100){
		printf("Gas");
	}
}
