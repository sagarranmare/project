#include<stdio.h>
void seats(int,char);
void time(int a,char z){
	int i,q;
	char x=z;
	printf("please select time\n");
	printf("[1]11:00 am\n[2]5:00 pm\n[3]8:00pm\n);
	scanf("%d",&i);
	if(a==1){
	q=i;	
	}
	if(a==2){
	q=i+3;
	}
	seats(q,x);
}
