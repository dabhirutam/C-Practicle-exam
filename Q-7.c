#include<stdio.h>

main(){
	
	int r,c,n=11;
	
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){
			printf("%d ",n++);
		}
		printf("\n");
	}
}