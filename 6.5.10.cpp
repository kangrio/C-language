#include <stdio.h>
int main(){
	float salary;
	

	printf("Input Your Salary : ");
	scanf("%f",&salary);
	

	if(salary<12000){
		printf("Sorry Can not make card");
	}else if((salary>=12000)&&(salary<=20000)){
		printf("Silver Card");
	}else if(salary>20000){
		printf("Gold Card");}
	
}
