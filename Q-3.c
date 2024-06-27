#include<stdio.h>

main(){
	
	int r,s,sum;
	
	printf("Enter the size of Array :- ");
	scanf("%d", &s);
	
	int array[s],arrayr[s];
	s = sizeof(array)/sizeof(array[0]);
	
	for(r=0; r<s; r++){
		printf("Enter the Array[%d] :- ", r);
		scanf("%d", &array[r]);
		sum += array[r];
	}
	
	for(r=0; r<s; r++){
		arrayr[r] = array[s-1-r];
		printf("\nArrayr[%d] :- %d", r, arrayr[r]);
	}
	
	printf("\nSum of reverse array elementsis = %d", sum);
}