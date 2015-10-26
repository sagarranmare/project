#include<stdio.h>
void  time(int,char);
void pvr();
void inox();
void cmp();
void date(int x,char y){
	int i,s;
	char z=y;
	printf("Please select date\n");
	printf("1.28-11-15\n");
	printf("2.29-11-15\n");
	printf("press 0 for previous menu\n");
	scanf("%d",&i);
	if(i==1){
	s=1;
	time(s,z);
	}
	else if(i==2){
	s=2;
	time(s,z);
	}
	else if(i==0){
		if(x==1)
		pvr();
		else if(x==2)
		inox();
		else if(x==3)
		cmp();
	}
	else{	
	printf("wrong selection");}	
}

