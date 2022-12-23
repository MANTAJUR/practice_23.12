#include<stdio.h>
int main(){
	int number=0;
	printf("enter number:\n");
	scanf("%d", &number);
	
	if(number>=0){printf("poitive number \n");
	if(number%2==0){
	printf("even number\n");
	}else{printf("odd number\n");
	}
	}else{printf("negative number");
	}
	return 0;
	}
