#include<stdio.h>
void cmp();
int main();
void movies(){
 int i;
	printf("\t\tAvailable shows are:\n");
	printf("\t\t1.hfasjhfas\n\t\t2.safasfasf\n");
	printf("\t\tpress 0 for previous menu\n");
	scanf("%d",&i);
	if(i==1||i==2){
	 cmp();	
	}
	if(i==0)
	main();
}

