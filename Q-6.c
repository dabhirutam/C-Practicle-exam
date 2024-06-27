#include<stdio.h>

main(){
	
	FILE* pf;
	char n[50],r[50];
	
	printf("Enter the name :- ");
	scanf("%s", &n);
	printf("Enter the role :- ");
	scanf("%s", &r);
	
	pf = fopen("data.txt", "w");
	
	fputs(n,pf);
	fputs(r,pf);
	
	fclose(pf);
}