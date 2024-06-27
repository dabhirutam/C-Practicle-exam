#include<stdio.h>

main(){
	
	int r,s;
	
	printf("Enter the size of Array :- ");
	scanf("%d", &s);
	
	int array[s];
	s = sizeof(array)/sizeof(array[0]);
	int *pa = &array;
	
	for(r=0; r<s; r++){
		printf("Enter the Array[%d] :- ", r);
		scanf("%d", &array[r]);
	}
	
	for(r=0; r<s; r++){
		printf("\n\nEnter the Array[%d] :- %d", r, *pa);
		printf("\nCube of Array[%d] is :- %d", r, (*pa)*(*pa)*(*pa));
		pa++;
	}
}