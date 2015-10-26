#include<stdio.h>
void date(int);
void cinemas();
void inox() {
	int i,a=2;
	printf("\t\t NOW SHOWING\n");
	printf("1. xyz\n");
	printf("2.asmmbd\n");
	printf("press 0 for previous menu\n");
	scanf("%d",&i);	
	if(i==1||i==2){
	 date(a);
	}
	else if(i=0){
	cinemas();
	}
	else {
		printf("wrong selection");
	}
}

