#include <stdio.h>
int main(){
	float richter;
	
	printf("Input number richter : ");
	scanf("%f",&richter);
	
    if(richter<=1.9){
     	printf("Do not feel");
	}else if ((richter>=2.0)&&(richter<=3.9)){
	 	printf("Very soft");
	}else if((richter>=4.0)&&(richter<=4.9)){
	 	printf("Soft");
	}else if((richter>=5.0)&&(richter<=5.9)){
	 	printf("Moderate");
	}else if((richter>=6.0)&&(richter<=6.9)){
	 	printf("Severe");
	}else if((richter>=7.0)&&(richter<=8.9)){
	 	printf("Very severe");
	}else if((richter>=8.0)&&(richter<=9.9)){
	 	printf("Very severe");
	}else if(richter>=10.0){
	 	printf("Devastate");
	 }
	
}
