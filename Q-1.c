#include<stdio.h>

int main(){
	
	int a,b,ans,choise;
	
	printf("Enter the value of A :- ");
	scanf("%d", &a);
	printf("Enter the value of B :- ");
	scanf("%d", &b);
	
	printf("\nAddtion of A & B Enter '1'\n");
	printf("Subtraction of A & B Enter '2'\n");
	printf("Multification of A & B Enter '3'\n");
	printf("Division of A & B Enter '4'\n");
	
	printf("Enter the number :- ");
	scanf("%d", &choise);
	
	switch(choise){
		case 1:
			ans = a+b;
			break;
		case 2 :
			ans = a-b;
			break;
		case 3 :
			ans = a*b;
			break;
		case 4 :
			ans = a/b;
			break;
	}
	
	printf("\nAns is = %d", ans);
	
	return 0;
}