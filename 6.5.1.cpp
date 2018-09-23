#include <stdio.h>
int main(){
	int temperature;
	
	printf("Input number temperature : ");
	scanf("%d",&temperature);
	
     if(temperature<=19){
     	printf("Tool Cool");
	 }else if ((temperature>=20)&&(temperature<=37)){
	 	printf("Warm");
	 }else if(temperature>=37){
	 	printf("Too Hot");
	 }
	 
	 
		


	
	
	
	
}
