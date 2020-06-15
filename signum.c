#include <stdio.h>
#include <stdlib.h>

int signum(int a){
	
	if(a<=-1){
	return -1;
	}
	else if(a==0){
	return 0;
	}
	else {
	return 1;
	}
	
}
int main (){
	
	int a;
	
	 printf("Bitte eine Zahl eingeben:\n");
	 scanf("%d",&a);
	
	int b= signum(a);
	printf("%d",b);
	
	 return 0;
	
}
