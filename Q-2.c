#include<stdio.h>

main(){
	
	int r,s,sum;
	
	printf("Enter the size of Array :- ");
	scanf("%d", &s);
	
	int array[s];
	s = sizeof(array)/sizeof(array[0]);
	
	for(r=0; r<s; r++){
		printf("Enter the Array[%d] :- ", r);
		scanf("%d", &array[r]);
		sum += array[r];
	}
	
	printf("\nSum of array elementsis = %d", sum);
}