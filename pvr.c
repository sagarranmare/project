#include<stdio.h>
void date(int,char);
void cinemas();
void pvr() {
	int i,a=1;
	char x;
	printf(" \t\tNOW SHOWING\n");
	printf("1.martian(hindi)\n");
	printf("2.Martian(English)\n");
	printf("press 0 for previous menu\n");
	scanf("%d",&i);
	if(i==1){
	x='a';
	}
	else if(i==2){
	x='b';
	}
	else {
	printf("wrong selection");
	pvr();
	}
	if(i==1||i==2){
		date(a,x);
	}
	else if(i==0){
	cinemas();
	}	
}

