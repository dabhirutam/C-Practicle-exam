#include<stdio.h>
#include<stdlib.h>

struct book{
	char title[50], author[50];
	int price;
};

main(){
	
	struct book b1 = { "Gujarati", "Language",250}, b2 = { "History", "History",350};
	
	printf("Book 1");
	printf("\nBook Title :-  %s",b1.title);
	printf("\nBook Author :-  %s",b1.author);
	printf("\nBook Price :-  %d",b1.price);
	
	printf("\n\nBook 2");
	printf("\nBook Title :-  %s",b2.title);
	printf("\nBook Author :-  %s",b2.author);
	printf("\nBook Price :-  %d",b2.price);
}